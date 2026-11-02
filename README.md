# Water Usage Bill Calculator (C Programming)

A simple, menu-driven console application written in C that helps calculate the water usage bill based on consumption units, applies slab rates, and saves billing records permanently in a text file.

## Objectives
* Apply C basics (structures, arrays, functions, pointers, strings, loops) in one practical project.
* Learn file handling by saving and loading billing records permanently.
* Practise input validation so the program does not crash on wrong input.

## Features
| # | Feature | What it does |
|---|---|---|
| 1 | Calculate & Save Bill | Takes Consumer ID, Name, Units; calculates total bill automatically |
| 2 | View All Records | Shows all billing records in a formatted table |
| 3 | Exit | Data is already saved; program closes safely |

Input validation: units must be positive numbers, menu choice and Consumer ID must be valid entries.

## Technologies
* **Language:** C (standard C99, `stdio.h`, `stdlib.h`, `string.h`)
* **Compiler:** GCC (or any C compiler)
* **Storage:** Plain text file (`water_records.txt`)

## Project Folder Structure
```text
Water-Usage-Bill-Calculator/
├── README.md
├── water_bill.c          <- complete source code
└── water_records.txt     <- created automatically on first run
