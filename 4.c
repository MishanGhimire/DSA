#include <stdio.h>

#include <stdlib.h>

int main(void) {

    int n;
    int * max, * min;
    int sum = 0, average;

    printf("Enter N Numbers :");
    scanf("%d", & n);
    int * numbers_pointer = (int * ) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        printf("Enter Number %d : ", i + 1);
        scanf("%d", numbers_pointer + i);
    }
    max = numbers_pointer;
    min = numbers_pointer;

    for (int i = 0; i < n; i++) {
        if (( * max) < ( * numbers_pointer + i)) {
            max = numbers_pointer + i;
        }
        if (( * min) > ( * numbers_pointer + i)) {
            min = numbers_pointer + i;
        }
        sum += * numbers_pointer + i;
    }
    average = sum / n;
    printf("The Sum is : %d\n", sum);
    printf("The Average is : %d\n", average);
    printf("The Max is : %d\n", * max);
    printf("The Min is : %d\n", * min);
    return 0;
}