/* FIFO */
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct queue {
    Node *front, *rear;
    int size;
} Queue;

Queue *queue_initialise();
Node *create_node(int);
void enqueue(Queue *, int);
int dequeue(Queue *);
int isEmpty(Queue *);
void display(Queue *);
void queue_destroy(Queue *);

int main(int argc, char const *argv[]) {
    int choice, data;
    Queue *queue = queue_initialise();

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("\nYour choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter data: ");
                scanf("%d", &data);
                enqueue(queue, data);
                display(queue);
                break;
            }
            case 2: {
                if(!isEmpty(queue)){
                    data = dequeue(queue);
                    printf("Removed: %d\n", data);
                }
                display(queue);
                break;
            }
            case 3: {
                display(queue);
                break;
            }
            case 4: {
                queue_destroy(queue);
                return 0;
            }
        }
    } while (choice);
    queue_destroy(queue);
    return 0;
}

Node* create_node(int data) {
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->data = data;
    return new_node;
}

Queue* queue_initialise() {
    Queue* new_queue = (Queue *) malloc(sizeof(Queue));
    new_queue->front = NULL;
    new_queue->rear = NULL;
    new_queue->size = 0;
    return new_queue;
}

int isEmpty(Queue* queue){
    return (queue == NULL || queue->front==-1);
}

void display(Queue *queue) {
    if(isEmpty(queue)){
        printf("Queue is Empty\n");
        return;
    }
    Node *traverse = queue->front;
    while (traverse != NULL) {
        printf("%d->", traverse->data);
        traverse = traverse->next;
    }
    printf("NULL\n");
}

void enqueue(Queue* q, int data) {
    Node* new_node = create_node(data);
    q->size++;
    if (q->front == NULL) {
        q->front = new_node;
        q->rear = new_node;
        return;
    }
    q->rear->next = new_node;
    q->rear = new_node;
}

int dequeue(Queue* q) {
    Node *to_del = q->front;
    int removed = to_del->data;

    q->front = q->front->next;
    free(to_del);

    q->size--;
    return removed;
}

void queue_destroy(Queue *queue) {
    if (isEmpty(queue)) 
        return;

    Node *traverse = queue->front, *to_del = NULL;
    while (traverse->next != NULL) {
        to_del = traverse;
        traverse = traverse->next;
        free(to_del);
    }
    queue->front = NULL;
    queue->rear = NULL;
    free(queue);
}