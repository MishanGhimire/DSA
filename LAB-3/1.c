#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int front, rear;
} LinearQueue;

void enqueue(LinearQueue *q, int value) { q->arr[++q->rear] = value; }
int dequeue(LinearQueue *q) { return q->arr[q->front++]; }
int isEmpty(LinearQueue *q) { return q->front > q->rear; }

int main() {
    LinearQueue queue = {{0}, -1, -1};
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    while (!isEmpty(&queue)) {
        printf("%d ", dequeue(&queue));
    }

    return 0;
}
