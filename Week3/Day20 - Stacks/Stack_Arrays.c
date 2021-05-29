#include <stdio.h>
#include <stdlib.h>

void push(int *, int, int *);
int pop(int *, int *);
int peek(int *, int);
int isEmpty(int);
int isFull(int, int);
void display(int *, int);
void stack_destroy(int *, int);

int main(int argc, char *argv[]) {
    int STACK_SIZE;
    printf("Enter Stack Size : ");
    scanf("%d",&STACK_SIZE);
    int stack[STACK_SIZE];
    // Stack empty, top = -1
    int top = -1, choice, received;

    do {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");  
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("\nYour choice: ");
        scanf("%d", &choice);

        switch (choice) {
            int data;
            case 1: {
                if(!isFull(top, STACK_SIZE)){
                    printf("Enter number: ");
                    scanf("%d", &data);
                    push(stack, data, &top);                            // Push to Top
                }                           
                else
                    printf("Stack overflow\n");                    
                display(stack, top);
                break;
            }
            case 2: {
                if(!isEmpty(top))
                    printf("Popped element: %d\n", pop(stack, &top));  // Pop from Top
                display(stack, top);
                break;
            }
            case 3: {
                if(!isEmpty(top))
                    printf("Peeked element: %d\n", peek(stack, top));  // Peek at Top
                display(stack, top);
                break;
            }
            case 4: {
                display(stack, top);
                break;
            }
            case 5: {
                stack_destroy(stack, top);
                return 0;
            }
            default: {
                printf("Invalid input\n");
                continue;
            }
        }

    } while (choice);
    stack_destroy(stack, top);
    return 0;
}

int isEmpty(int top){
    return top==-1;
}

int isFull(int top, int STACK_SIZE){
    return top==STACK_SIZE - 1;
}
void push(int *stack, int data, int *ptop) {
    ++(*ptop);                                              // Increase top by 1
    stack[*ptop] = data;                                    // and add data
}

int pop(int *stack, int *ptop) {
    int val = stack[*ptop];                                 // store val of top most ele
    stack[*ptop] = 0;                                       // Make top most ele 0
    --(*ptop);                                              // Decrement top by 1
    return val;                                             // return popped ele for printing
}

int peek(int *stack, int top) {
    return stack[top];                                      // Peek at top => return top most ele
}

void display(int *stack, int top) {
    if(top==-1){
        printf("Stack is Empty\n");
        return;
    }
    for (int i = top; i >= 0; --i)
        printf("%d->", stack[i]);
    printf("NULL\n");
}

void stack_destroy(int *stack, int top) {
    for (int i = 0; i <= top; ++i) {
        stack[i] = 0;
    }
}