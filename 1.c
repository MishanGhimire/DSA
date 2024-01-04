#include <stdio.h>

int main(void) {
  int num1, num2;
  printf("Enter Two Numbers Separated by a Space : ");
  scanf("%d %d", &num1, &num2);
  printf("The Max is %d and the Min is %d", num1 > num2 ? num1 : num2,
         num1 < num2 ? num1 : num2);
  return 0;
}