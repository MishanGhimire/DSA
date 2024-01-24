#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct {
    int arr[MAX_SIZE];
    int front, rear;
} LinearQueue;

LinearQueue *queue;

void initQueue() {
    queue = (LinearQueue *)malloc(sizeof(LinearQueue));
    queue->front = queue->rear = -1;
}

void enqueue(int value) { queue->arr[++queue->rear] = value; }
int dequeue() { return queue->arr[queue->front++]; }
int isEmpty() { return queue->front > queue->rear; }

int main() {
    initQueue();
    enqueue(1);
    enqueue(2);
    enqueue(3);

    while (!isEmpty()) {
        printf("%d ", dequeue());
    }

    free(queue);
    return 0;
}
