#include <stdio.h>

#define MAX_SIZE 5

struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

int isEmpty(struct Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

void enqueue(struct Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue Overflow!\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else {
        q->rear++;
    }

    q->items[q->rear] = value;
}

int dequeue(struct Queue *q) {
    int item;

    if (isEmpty(q)) {
        printf("Queue Underflow!\n");
        return -1;
    } else if (q->front == q->rear) {
        item = q->items[q->front];
        q->front = -1;
        q->rear = -1;
    } else {
        item = q->items[q->front];
        q->front++;
    }

    return item;
}

void displayQueue(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    struct Queue myQueue;
    initializeQueue(&myQueue);

    // Enqueue N items
    int N = 3;
    for (int i = 1; i <= N; i++) {
        enqueue(&myQueue, i);
    }

    // Display the queue
    displayQueue(&myQueue);

    // Dequeue N+1 items
    int M = N + 1;
    for (int i = 1; i <= M; i++) {
        dequeue(&myQueue);
    }

    // Display the queue after dequeue
    displayQueue(&myQueue);

    return 0;
}
