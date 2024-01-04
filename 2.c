#include <stdio.h>

int getFactorial(int number) {
  int total = 1;
  for (int i = 1; i <= number; i++) {
    total *= i;
  }
  return total;
}

int main(void) {
  unsigned int number;
  printf("Enter Number to get Factorial : ");
  scanf("%d", &number);
  int factorial = getFactorial(number);
  printf("The Factorial is %d", factorial);
  return 0;
}