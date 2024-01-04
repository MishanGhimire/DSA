#include <stdio.h>

int getFactorial(int number) {
  static int answer = 1;
  if (number == 0) {
    return answer;
  }
  answer *= number;
  number--;
  getFactorial(number);
}

int main(void) {
  int number;
  printf("Enter Your Number :");
  scanf("%d", &number);
  int factorial = getFactorial(number);
  printf("The Factorial is %d", factorial);
  return 0;
}