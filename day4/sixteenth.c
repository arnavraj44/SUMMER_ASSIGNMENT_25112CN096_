//program to Print Armstrong numbers in a range

#include <math.h>
#include <stdio.h>
int main() {
  int low, high, number, originalNum, rem, count = 0;
  int result = 0.0;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &low, &high);
  printf("Armstrong numbers between %d and %d are: ", low, high);

  // swap numbers if high < low
  if (high < low) {
    high += low;
    low = high - low;
    high -= low;
  }
  for (number = low + 1; number < high; ++number) {
    originalNum = number;
    
    while (originalNum != 0) {
      originalNum /= 10;
      ++count; }
    originalNum = number;

    while (originalNum != 0) {
      rem = originalNum % 10;
      result += pow(rem, count);
      originalNum /= 10; }
    if ((int)result == number) {
      printf("%d ", number); }
    count = 0;
    result = 0;
  }
return 0; }

