# CSA02 – C Programming Assignment 4

## Modelling Real-World Data with Structures and Unions

### Student Details

- **Name:** MARIMUTHU
- **Register Number:** 1911260126
- **Course:** C Programming
- **Course Code:** CSA02
- **Assignment:** Assignment 4 – CO4
- **Submission Date:** 20 November 2026

---

## 1. Introduction

This assignment focuses on modelling real-world data using structures, unions, pointers and storage classes in the C programming language.

The programs demonstrate how to organize related data, manage memory efficiently, access structure members, and implement practical applications using C.

## 2. Software Requirements

- **Programming Language:** C
- **IDE:** Dev-C++
- **Compiler:** GCC (MinGW)
- **Operating System:** Windows
- **Version:** Enter the actual GCC version installed on your computer.

To check your GCC version, execute:

```bash
gcc --version
```

## 3. Repository Structure

```text
CSA02-1911260126-Assignment4/
│
├── Task 1/
│   ├── Task 1.c
│   └── Output.png
│
├── Task 2/
│   ├── Task 2.c
│   └── Output.png
│
├── Task 3/
│   ├── Task 3.c
│   └── Output.png
│
├── Task 4/
│   ├── Task 4.c
│   └── Output.png
│
├── Task 5/
│   ├── Task 5.c
│   └── Output.png
│
├── Task 6/
│   ├── Task 6.c
│   └── Output.png
│
└── README.md
```

## 4. Task Descriptions and Results

### Task 1 – Patient Record Management Using Structures

**Objective:**
To organize patient information using nested structures and improve data management.

**Concepts Used:**
- Structures
- Nested structures
- Structure arrays
- Pointers
- Functions

**Implementation:**
- Created a Patient structure to store patient details.
- Used separate Date and BloodPressure structures.
- Implemented an `addPatient()` function using pointers.
- Added capacity validation before inserting a patient record.

**Result:**
Patient details were successfully stored and displayed using nested structures.

### Task 2 – Courier Parcel Tracking Using Nested Structures

**Objective:**
To manage courier parcel details and arrange parcels based on their weight.

**Concepts Used:**
- Nested structures
- Structure arrays
- Dot operator
- Arrow operator
- Selection sort
- `sizeof` operator

**Implementation:**
- Created Parcel, Address and Date structures.
- Implemented a function to display parcel information.
- Used selection sort to arrange parcels by ascending weight.
- Accessed structure members using dot and arrow operators.

**Result:**
Parcel information was displayed successfully and sorted according to weight.

### Task 3 – Weather Sensor Data Using Structures and Unions

**Objective:**
To demonstrate the difference between structures and unions in storing sensor information.

**Concepts Used:**
- Structures
- Unions
- Tagged unions
- Switch statements
- `sizeof` operator

**Implementation:**
- Created a structure to store all sensor values.
- Created a union to share memory between sensor values.
- Used a type indicator to identify the active sensor data.
- Displayed temperature, humidity and status using a switch statement.

**Result:**
Weather sensor information was displayed successfully using structures and unions.

### Task 4 – Bank Account Management Using Pointers

**Objective:**
To understand how pointers access and modify structure data.

**Concepts Used:**
- Structures
- Structure pointers
- Address operator
- Arrow operator
- Functions
- Pass by reference using pointers

**Implementation:**
- Created an Account structure.
- Passed the structure address to functions.
- Displayed account information using a structure pointer.
- Updated the account balance through a pointer.

**Result:**
Account details were accessed and the balance was successfully updated using pointers.

### Task 5 – Storage Classes and Token Counter

**Objective:**
To understand the behaviour of automatic and static storage classes.

**Concepts Used:**
- Automatic variables
- Static variables
- Scope and lifetime
- Functions
- Conditional statements

**Implementation:**
- Demonstrated static variables retaining their values between function calls.
- Demonstrated automatic variables being reinitialized during each function call.
- Created a canteen token counter for vegetarian and non-vegetarian orders.

**Result:**
The difference between static and automatic variables was demonstrated successfully, and the token counter maintained separate counts.

### Task 6 – Canteen Inventory and Billing System

**Objective:**
To develop a simple canteen inventory and billing system using structures and unions.

**Concepts Used:**
- Nested structures
- Structure arrays
- Unions
- Conditional statements
- Loops
- Functions
- Inventory management

**Implementation:**
- Created structures to store item and expiry-date details.
- Stored multiple inventory items using an array.
- Checked available stock before processing a sale.
- Displayed expiry warnings for selected items.
- Calculated the total bill and updated inventory.
- Demonstrated cash and UPI payment information using a union.

**Result:**
The program demonstrated basic inventory management, stock validation and billing operations.

## 5. Compilation and Execution

The following GCC command can be used to compile each individual program.

Example for Task 1:

```bash
gcc Task01.c -o Task01
```

Run the program:

```bash
Task01
```

Similarly, compile and execute the remaining tasks:

```bash
gcc Task02.c -o Task02
Task02

gcc Task03.c -o Task03
Task03

gcc Task04.c -o Task04
Task04

gcc Task05.c -o Task05
Task05

gcc Task06.c -o Task06
Task06
```

**Note:** These commands assume GCC is available in the system PATH. Use the actual compiler version and commands used for your execution.

## 6. Output Screenshots

Each task folder contains the corresponding C source code and its execution screenshot.

The screenshots demonstrate the program execution and output for the respective tasks.

## 7. Learning Outcomes

Through this assignment, I learned:

1. How to define and use structures in C.
2. How to create nested structures for organizing complex data.
3. How to use unions for memory sharing.
4. How to access structure members using pointers.
5. How static and automatic storage classes work.
6. How to implement real-world applications using C programming concepts.

## 8. Conclusion

This assignment provided practical experience in using structures, unions, pointers and storage classes in C programming. It improved my understanding of data organization, memory management and the implementation of real-world applications using structured programming.

---

**GitHub Repository:**  
https://github.com/Marimuthu0308/CSA02-1911260126-Assignment-4

**Submitted by:** MARIMUTHU  
**Register Number:** 1911260126
