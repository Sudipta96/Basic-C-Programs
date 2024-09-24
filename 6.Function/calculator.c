#include <stdio.h>
#include <stdlib.h>

// Function to add two numbers
double add(double a, double b) {
    return a + b;
}

// Function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// Function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// Function to divide two numbers
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        exit(1);
    }
}

int main() {
    char operator;
    double num1, num2;

    while (1) {
        printf("Enter an operator (+, -, *, /), or 'x' to quit: ");
        scanf(" %c", &operator);

        if (operator == 'x') {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, add(num1, num2));
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, subtract(num1, num2));
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, multiply(num1, num2));
                break;
            case '/':
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, divide(num1, num2));
                break;
            default:
                printf("Error: Invalid operator. Please use +, -, *, or /\n");
        }
    }

    return 0;
}
