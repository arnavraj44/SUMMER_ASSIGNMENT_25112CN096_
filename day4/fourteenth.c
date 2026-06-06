//program to find nth Fibonacci term

#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n) {
    if (n < 0) {
        printf("Error: n must be a non-negative integer.\n");
        return 0; }
    if (n == 0) return 0;
    if (n == 1) return 1;
    int prev = 0, curry = 1, next;
    for (int i = 2; i <= n; i++) {
        next = prev + curry;
        prev = curry;
        curry = next; }
    return curry;}

int main() {
 int n;
 printf("Enter the term number (n): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
 if (n < 0) {
        printf("Fibonacci term is not defined for negative numbers.\n");
        return 1;
    }
int result = fibonacci(n);
    printf("The %dth Fibonacci term is: %d\n", n, result);
    return 0; }