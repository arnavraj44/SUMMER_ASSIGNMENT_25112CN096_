// program to print Fibonacci series

#include <stdio.h>
int main(){
    printf("Enter the number of terms: ");
    int n;
    scanf("%d", &n);
    int a = 0, b = 1, c;
    printf("Fibonacci series: ");
    for(int i = 0; i < n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;}
        return 0;}
