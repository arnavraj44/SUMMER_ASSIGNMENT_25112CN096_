// Function to check if a number is perfect

#include <stdio.h>
int isPerfect(int num) {
    int sum = 0, i;
    for(i = 1; i < num; i++) {
        if(num % i == 0) {
            sum += i; }
    }
       return (sum == num); }
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPerfect(num)) 
        printf("%d is a perfect number.\n", num); //if number is perfect
    else 
printf("%d is not a perfect number.\n", num); // if number is not perfect
   return 0;
}

