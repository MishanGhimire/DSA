#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numRings;
    printf("Enter the number of rings: ");
    scanf("%d", &numRings);

    // Assuming pegs are labeled as 'A', 'B', and 'C'
    char source = 'A', auxiliary = 'B', destination = 'C';

    printf("Tower of Hanoi moves for %d rings:\n", numRings);
    towerOfHanoi(numRings, source, auxiliary, destination);

    return 0;
}

