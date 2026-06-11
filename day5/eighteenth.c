// check if a number is Strong

#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact; }

int isStrongNumber(int num) {
    if (num < 0) return 0; // Negative numbers are not considered Strong
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return (sum == originalNum); }

int main() {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    if (isStrongNumber(number))
        printf("%d is a Strong Number.\n", number);
    else
        printf("%d is NOT a Strong Number.\n", number);
return 0; }
