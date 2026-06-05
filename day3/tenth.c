//Write a program to Print prime numbers in a 
//range

#include<stdio.h>
int main(){
    int start, end;
    int i,j, flag;
    printf("Enter the starting and ending range: ");
    scanf("%d %d", &start, &end);

    for(i = start; i <= end; i++){
        if(i < 2){
            continue; // Skip numbers less than 2
        }
        flag = 0; // Assume i is prime
        for(j = 2; j <= i/2; j++){
            if(i % j == 0){
                flag = 1; // i is not prime
                break;
            }
        }
        if(flag == 0){
            printf("%d ", i); // Print the prime number
        }
    }
    return 0;
}
