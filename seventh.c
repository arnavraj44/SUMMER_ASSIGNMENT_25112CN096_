// C Program to Find Product of Digits of a Number
#include <stdio.h>
int main(){
    int n, rem, prod = 1;
    
    // Asking for input
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Calculating product using while loop
    while (n != 0){
        rem = n % 10;
        prod = prod * rem;
        n = n / 10;
    }
    
    // Displaying output
    printf("Product of digits is: %d", prod);
    return 0;
}