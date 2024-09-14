# Project 3A: DJIA Data Dictionary

## Overview

This project focuses on the development and evaluation of an array-based dictionary implementation to manage historical stock price data for the Dow Jones Industrial Average (DJIA). The goal is to create a data structure capable of efficiently storing and retrieving large datasets, specifically for the opening prices of stock market data over several decades.

### Objectives

1. **Data Handling**: 
   - The primary task is to read and process a data file containing stock price information for dates ranging from 1970 to 2022. Each entry in the file includes a date and its corresponding opening price.

2. **Array-Based Dictionary Implementation**: 
   - Develop a custom dictionary using an array structure. The dictionary will map each date (as a string) to its associated opening price (as a float). This approach will allow efficient storage and retrieval operations.

3. **Performance Evaluation**: 
   - After populating the dictionary with the provided data, the implementation will be tested by performing multiple retrieval operations. The efficiency of these operations will be measured and compared against expected outcomes to verify the correctness and performance of the dictionary.

4. **Functionality**: 
   - **Initialization**: Set up the dictionary to handle a large number of entries.
   - **Storage**: Implement functionality to add new entries into the dictionary.
   - **Retrieval**: Implement functionality to fetch values based on the date key and ensure that retrieval operations are accurate and efficient.

### Technical Details

- **Data Structure**: The dictionary will use two parallel arrays: one for storing keys (dates) and another for storing values (opening prices). The implementation will handle up to 20,000 entries.
- **Error Handling**: The implementation will include error checking to manage issues such as file access errors and memory allocation failures.
- **Performance Metrics**: The time taken for both storage and retrieval operations will be measured using the `gettimeofday` function to ensure the implementation meets performance requirements.

## Description

1. **Data Input**
   - The input data is sourced from a file named `DJIA`, which includes historical stock prices. The file is read line by line, and each line is parsed to extract the date and opening price.

2. **Data Storage**
   - The data is stored in an array-based dictionary structure. Each date is associated with its opening price using an array indexing method, allowing for efficient access and management.

3. **Data Retrieval**
   - The program will perform retrieval operations for 13,083 dates to verify the correctness of the stored data. The retrieval time will be recorded, and the results will be compared against expected values to validate the implementation.

4. **Functions**
   - `Initialize(ArrayDictionary *ad)`: Sets up the dictionary for use.
   - `Store(ArrayDictionary *ad, char *key, float value)`: Inserts a key-value pair into the dictionary.
   - `Fetch(ArrayDictionary *ad, char *key)`: Retrieves the value associated with a given key.

## How to Run

To compile and run the program, use the following commands:

```bash
gcc -o djia_data_dictionary project3A.c
./djia_data_dictionary

Ensure that the data file named DJIA is present in the current directory before running the program.

This project was created during my CS 212 course.
