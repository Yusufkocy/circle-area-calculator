# Circle Area & Circumference Calculator

A simple-level area and circumference calculator built for engineering purposes.

## Description

This is a basic C++ console program that calculates the area and circumference of a circle based on a user-provided radius.

## How it works

1. The program prompts the user to enter the radius of a circle.
2. It calculates:
   - **Circumference** = 2 × π × r
   - **Area** = π × r × r
3. The results are printed to the console.

## Requirements

- A C++ compiler (e.g. GCC, MinGW, or Code::Blocks with a built-in compiler)
- Windows OS (uses `windows.h` for console UTF-8 output support)

## How to compile and run

Using g++:
```bash
g++ main.cpp -o calculator
./calculator
