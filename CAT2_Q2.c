// File: pay_calculator.c
// Author: Kimathi Boby Stone Murithi
// Description: Program to calculate gross pay, taxes, and net pay

#include <stdio.h>

int main() {
    float hours, wage, gross, tax, net;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay
    if (hours <= 40) {
        gross = hours * wage;
    } else {
        gross = (40 * wage) + ((hours - 40) * wage * 1.5);
    }

    // Calculate tax
    if (gross <= 600) {
        tax = gross * 0.15;
    } else {
        tax = (600 * 0.15) + ((gross - 600) * 0.20);
    }

    // Calculate net pay
    net = gross - tax;

    // Output results
    printf("\nGross Pay: $%.2f", gross);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", net);

    return 0;
}