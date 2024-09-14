// 5x5 Subarray Extractor
// Zain Saeed
// April 28, 2024

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10
#define SUBARRAY_SIZE 5

int main(int argc, char *argv[])
{
    // Ensure correct number of command-line arguments
    if (argc != 3)
    {
        printf("Usage: %s <input-filename> <output-filename>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Open input binary file
    FILE *input_file = fopen(argv[1], "rb");
    if (!input_file)
    {
        perror("Error opening input file");
        exit(EXIT_FAILURE);
    }

    // Open output text file
    FILE *output_file = fopen(argv[2], "w");
    if (!output_file)
    {
        perror("Error opening output file");
        fclose(input_file);
        exit(EXIT_FAILURE);
    }

    // Array to store 5 integers from each fread
    int values[SUBARRAY_SIZE];

    // Loop through the rows to read the 5x5 corner subarray
    for (int i = 0; i < SUBARRAY_SIZE; i++)
    {
        // Move to the correct position in the file for each row
        fseek(input_file, i * ARRAY_SIZE * sizeof(int), SEEK_SET);

        // Read 5 integers from the file
        fread(values, sizeof(int), SUBARRAY_SIZE, input_file);

        // Write each integer to the output file, one per line
        for (int j = 0; j < SUBARRAY_SIZE; j++)
        {
            fprintf(output_file, "%d\n", values[j]);
        }
    }

    // Close the files
    fclose(input_file);
    fclose(output_file);

    return 0;
}