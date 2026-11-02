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


How to Run
Linux / macOS / Windows (MinGW or Git Bash):
gcc water_bill.c -o water_bill
./water_bill               # on Windows: water_bill.exe

Demonstration Steps (for your viva / lab)
Start the program.

Choose 1, enter ID 111, Name mayank, Units 4.50. Add another record (e.g. ID 112, Name naveen, Units 5.00).

Choose 2 to show the formatted table of all saved records.

Choose 3 to exit, run the program again and choose 2 -> the records are still there (file handling works). Open water_records.txt to show the stored data.

Sample Output
=== Water Usage Bill Calculator ===
1. Calculate & Save Bill
2. View All Records
3. Exit
Enter your choice: 1

Enter Consumer ID: 111
Enter Consumer Name: mayank
Enter Water Units Consumed: 4.5

--- Water Bill Details ---
Consumer ID: 111
Name: mayank
Units Consumed: 4.50
Total Bill Amount: ₹22.50

Record saved successfully!

Contents of water_records.txt after this session:
111 | mayank | 4.50 | 22.50
112 | naveen | 5.00 | 25.00

Limitations / Future Scope
Holds basic billing records; no search by ID option; no monthly usage report. These can be added later (search option, edit records, graphical user interface).

