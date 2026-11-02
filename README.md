# Water Usage Bill Calculator (C Programming)

A simple, menu-driven console application written in C that helps calculate the water usage bill based on consumption units, applies different tariff rates, and saves the billing records permanently.

## Objectives
* Apply C basics (structures, arrays, functions, pointers, loops) in one practical project.
* Learn file handling by saving and loading billing records permanently.
* Practise input validation so the program does not crash on wrong input.

## Features
| # | Feature | What it does |
|---|---|---|
| 1 | Calculate & Add New Bill | Takes Consumer ID, Name, Units; calculates total bill automatically |
| 2 | View All Bills | Shows all records in a neat formatted table |
| 3 | File Storage | Saves records to `water_records.txt` permanently |

## Technologies
* **Language:** C (Standard C99, `stdio.h`, `stdlib.h`, `string.h`)
* **Compiler:** GCC (or any C compiler)
* **Storage:** Plain text file (`water_records.txt`)

## How to Run
```bash
gcc water_bill.c -o water_bill
./water_bill
