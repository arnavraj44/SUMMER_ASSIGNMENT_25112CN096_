//Write a program to Check whether a number is 
//prime

#include<stdio.h>
int main(){
    int i, n;
    int flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // as 0 and 1 is not prime
    //we will check for other numbers
    if (n == 0 || n == 1)
    flag = 1;
     for (i = 2; i <= n / 2; i++)
      { if (n % i == 0) {
            flag = 1;
            break;
        }
}

//so flag is 1 for non prime numbers
//and flag is zero for prime numbers

if (flag == 0)
   { printf("%d is a prime number.", n); }
else
    {printf("%d is not a prime number.", n);}
    return 0;
}
