#!/usr/bin/env python3
"""
Script to extract initial values of global variables from GT2.dis disassembly
and update gt2_global_vars.c with the correct values.

This script analyzes the disassembly to find where global variables are initialized
in the code, particularly in initialization functions.

Note: The current GT2.dis disassembly appears to be code-only and does not contain
data section with initial values. This script is designed to work with disassemblies
that include data sections or can detect initialization patterns in code.
"""

import re
import sys
from pathlib import Path

def parse_disassembly(dis_file):
    """
    Parse the disassembly file to find initial values for global variables.
    
    Returns a dictionary mapping variable addresses to their initial values.
    """
    var_values = {}
    
    with open(dis_file, 'r', encoding='utf-8', errors='ignore') as f:
        lines = f.readlines()
    
    print(f"Processing {len(lines)} lines from disassembly...")
    
    # For this disassembly format, look for patterns like:
    # mov [address],value where address is a global variable
    
    # Pattern for store immediate: mov [r+offset],value
    store_imm_pattern = re.compile(r'(\w{8})\s+mov\s+\[r(\d+)\+([0-9A-F]+)h\],([0-9A-F]+)')
    
    # Track register values (addresses loaded)
    registers = {}
    
    for i, line in enumerate(lines):
        line = line.strip()
        if not line:
            continue
            
        # Extract address and instruction
        parts = line.split()
        if len(parts) < 2:
            continue
            
        addr = parts[0]
        instr = ' '.join(parts[1:])
        
        # Check for movp (load address into register)
        if 'movp' in instr:
            movp_match = re.search(r'movp?\s+r(\d+),([0-9A-F]+)h', instr)
            if movp_match:
                reg, value = movp_match.groups()
                registers[int(reg)] = int(value, 16)
                continue
        
        # Check for store immediate
        store_match = store_imm_pattern.search(line)
        if store_match:
            addr_store, reg_base, offset, value = store_match.groups()
            if int(reg_base) in registers:
                base_addr = registers[int(reg_base)]
                offset_val = int(offset, 16)
                var_addr = base_addr + offset_val
                value_int = int(value, 16)
                
                # Convert to hex string for variable name
                var_name = f"DAT_{var_addr:08X}"
                var_values[var_name] = value_int
                print(f"Found initialization: {var_name} = {value_int}")
    
    return var_values

def update_global_vars_c(vars_file, var_values):
    """
    Update the gt2_global_vars.c file with the extracted values.
    """
    with open(vars_file, 'r') as f:
        content = f.read()
    
    # Pattern to match variable declarations like "undefined4 DAT_80091164 = 0;"
    var_pattern = re.compile(r'(undefined4\s+)(DAT_[0-9A-F]{8})\s*=\s*(\d+);')
    
    def replace_value(match):
        type_part, var_name, current_value = match.groups()
        if var_name in var_values:
            new_value = var_values[var_name]
            print(f"Updating {var_name}: {current_value} -> {new_value}")
            return f"{type_part}{var_name} = {new_value};"
        return match.group(0)
    
    updated_content = var_pattern.sub(replace_value, content)
    
    with open(vars_file, 'w') as f:
        f.write(updated_content)
    
    print(f"Updated {len(var_values)} variable values in {vars_file}")

def main():
    if len(sys.argv) != 3:
        print("Usage: python extract_global_values.py <GT2.dis> <gt2_global_vars.c>")
        print("\nNote: This script looks for initialization patterns in the disassembly.")
        print("The current GT2.dis appears to be code-only. For full functionality,")
        print("use a disassembly that includes data sections or initialization code.")
        sys.exit(1)
    
    dis_file = sys.argv[1]
    vars_file = sys.argv[2]
    
    if not Path(dis_file).exists():
        print(f"Error: {dis_file} not found")
        sys.exit(1)
    
    if not Path(vars_file).exists():
        print(f"Error: {vars_file} not found")
        sys.exit(1)
    
    print("Parsing disassembly file...")
    var_values = parse_disassembly(dis_file)
    
    print(f"Found {len(var_values)} variable initializations")
    
    if var_values:
        print("Updating global variables file...")
        update_global_vars_c(vars_file, var_values)
        print("Done!")
    else:
        print("No variable initializations found in the disassembly.")
        print("This could mean:")
        print("1. The disassembly doesn't include data sections")
        print("2. Variables are initialized to zero (default)")
        print("3. Initialization happens at runtime")
        print("4. Different disassembly format than expected")

if __name__ == "__main__":
    main()