#include <stdio.h>

int factorial_tail_recursive(int n, int result) {
    if (n == 0 || n == 1) {
        return result;
    } else {
        return factorial_tail_recursive(n - 1, n * result);
    }
}

int factorial(int n) {
    return factorial_tail_recursive(n, 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is: %d\n", num, factorial(num));

    return 0;
}
