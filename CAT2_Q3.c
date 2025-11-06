#include <stdio.h>
#include <stdlib.h>

void writeInputFile() {
    FILE *fptr;
    int numbers[10];

    fptr = fopen("input.txt", "w");
    if (fptr == NULL) {
        printf("Error opening input.txt for writing.\n");
        exit(1);
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(fptr, "%d\n", numbers[i]);
    }

    fclose(fptr);
}

void processFile() {
    FILE *in, *out;
    int num, sum = 0, count = 0;
    double average;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input.txt for reading.\n");
        exit(1);
    }

    while (fscanf(in, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(in);

    if (count == 0) {
        printf("No numbers found in input.txt!\n");
        exit(1);
    }

    average = (double) sum / count;

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error opening output.txt for writing.\n");
        exit(1);
    }

    fprintf(out, "Sum = %d\n", sum);
    fprintf(out, "Average = %.2f\n", average);

    fclose(out);
}

void displayFiles() {
    FILE *fptr;
    char ch;

    printf("\nContents of input.txt:\n");
    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening input.txt.\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);

    printf("\nContents of output.txt:\n");
    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening output.txt.\n");
        return;
    }
    while ((ch = fgetc(fptr)) != EOF)
        putchar(ch);
    fclose(fptr);
}

int main() {
    writeInputFile();
    processFile();
    displayFiles();
    return 0;
}