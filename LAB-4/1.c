#include <stdio.h>

int fibonacci_tail_recursive(int n, int a, int b) {
    if (n == 0) {
        return a;
    } else {
        return fibonacci_tail_recursive(n - 1, b, a + b);
    }
}

int fibonacci(int n) {
    return fibonacci_tail_recursive(n, 0, 1);
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The %dth term in the Fibonacci series is: %d\n", n, fibonacci(n));

    return 0;
}
