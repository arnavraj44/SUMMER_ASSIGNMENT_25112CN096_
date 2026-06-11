// Function to print factors of a number

#include <stdio.h>
#include <stdlib.h>
void printFactors(int n) {
int absN = abs(n); // Factors are usually considered for positive numbers
 printf("Factors of %d are: ", n);
for (int i = 1; i <= absN; i++) {
        if (absN % i == 0) {
            printf("%d ", i); }
    }
    printf("\n"); }

int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; 
    }
    if (num == 0) {
        printf("Every non-zero integer is a factor of 0.\n");
        return 0;
    }
    printFactors(num);
    return 0;
}
