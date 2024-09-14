# 5x5 Subarray Extractor

## Overview

This C program reads a binary file containing a 10x10 two-dimensional array of integers. It extracts a 5x5 subarray from the upper-left corner of the array and writes the integers into an output text file. The program efficiently reads the required values in five chunks and outputs each integer on a new line in the output file.

## Features

- **Efficient File Handling**: Reads only the necessary 25 integers from the file in five chunks.
- **Customizable Input and Output**: Accepts input and output filenames as command-line arguments.
- **File Stream Operations**: Uses `fopen`, `fread`, `fseek`, `fprintf`, and `fclose` for binary file handling.

## Usage

To compile the program:

```sh
gcc -o subarray_extractor project2E.c
```

To run the program, pass the input and output filenames as arguments:

```sh
./subarray_extractor <input-filename> <output-filename>
```

For example:

```sh
./subarray_extractor 2E_binary_file output.txt
```

This command reads the binary file `2E_binary_file` and writes the extracted 5x5 subarray into `output.txt`.

### Example Output

The output file will contain the 25 integers, each on a new line, corresponding to the values in the top-left 5x5 corner of the array. It should look like:

```
<value1>
<value2>
...
<value25>
```

## Error Handling

- **Invalid Command Line Arguments**: If the user does not provide exactly two filenames, the program prints a usage message and exits.
- **File Opening Errors**: If the input or output files cannot be opened, the program prints an error message and exits.
- **Binary File Reading**: The program reads the binary file in groups of 5 integers and writes the output to the text file line by line.

## Notes

- This program only reads the specific 25 integers from the input binary file that form the top-left corner of a 10x10 array.
- The file should be compatible with a VirtualBox environment or a Unix-like system.

## Files

- `project2E.c`: The source code file for the project.
- `2E_binary_file`: The binary file containing the 10x10 array (not included in this repository).
- `proj2E_checker`: A script provided for verifying the correctness of the output (not included in this repository).

---

*This project was created during my CS 212 course.*
