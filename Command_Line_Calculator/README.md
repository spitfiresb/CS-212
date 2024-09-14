# Command Line Calculator

## Overview

This C program performs basic arithmetic operations based on user input from the command line. It accepts three arguments: two numbers and a mathematical operator. The supported operations are addition (`+`), subtraction (`-`), multiplication (`x` or `*`), and division (`/`). The program outputs the result of applying the specified operation to the two numbers.

## Features

- **Basic Arithmetic Operations**: Supports addition, subtraction, multiplication, and division.
- **Input Validation**: Ensures that the input strings represent valid numbers and operations.
- **Error Handling**: Handles invalid input by printing appropriate error messages and exiting with a non-zero status.

## Usage

Compile the program using a C compiler:

```sh
gcc -o calculator project2D.c
```

Run the program by providing the three required command line arguments:

```sh
./calculator <num1> <op> <num2>
```

### Example

To perform subtraction of 3.5 from 2.5:

```sh
./calculator 2.5 - 3.5
```

The output will be:

```
-1
```

### Supported Operations

- `+` : Addition
- `-` : Subtraction
- `x` or `*` : Multiplication
- `/` : Division

## Error Handling

- **Invalid Number**: If the input strings are not valid floating-point numbers, the program will print an error message and exit.
- **Invalid Operation**: If the operation is not supported, the program will print an error message and exit.
- **Division by Zero**: While the current implementation does not explicitly handle division by zero, it's something to be aware of.

## Notes

- The program converts the result to an integer before printing.
- It does not use any external libraries or functions for parsing numbers or performing operations, focusing solely on implementing these functionalities manually.

## Files

- `project2D.c`: The source code file for the project.
- `proj2D_checker.sh`: A script provided for testing the program against various inputs (not included in this repository).

---

*This project was created during my CS 212 course.*
