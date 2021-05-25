#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

typedef struct list {
    Node* last;
    int no_of_elements;
} List;

List* init_list();
Node* get_newNode(int);
void display(List*);
void destroy_list(List*);
void insert_front(List*, int);
void insert_end(List*, int);
void insert_pos(List*, int, int);
void delete_front(List*);
void delete_end(List*);
void delete_pos(List*, int);
void delete_val(List*, int);

int main() {
    List *list = init_list();
    int ch, data;

    while (1) {
        printf("\n\nMAIN MENU\n\n");
        printf("1. Insert element to front\n");
        printf("2. Insert element to end\n");
        printf("3. Insert into any position\n");   
        printf("4. Delete element at front\n");
        printf("5. Delete element at end\n");
        printf("6. Delete element from any position\n"); 
        printf("7. Delete first occurance of value\n");
        printf("8. Display\n");
        printf("9. Exit\n");

        printf("\nYour choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                // Front insert
                printf("Enter number: ");
                scanf("%d", &data);
                insert_front(list, data);
                display(list);
                break;
            }
            case 2: {
                // End insert
                printf("Enter number: ");
                scanf("%d", &data);
                insert_end(list, data);
                display(list);
                break;
            }
            case 3: {
                // Insert pos
                int pos, val;
                printf("Enter position (1-based index): ");
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                insert_pos(list, pos, val);
                display(list);
                break;
            }
            case 4: {
                // Delete front
                delete_front(list);
                display(list);
                break;
            }
            case 5: {
                // Delete end
                delete_end(list);
                display(list);
                break;
            }
            case 6: {
                // Delete pos
                int pos;
                printf("Enter position (1-based index): ");
                scanf("%d", &pos);
                delete_pos(list, pos);
                display(list);
                break;
            }
            case 7: {
                // Delete val
                int val;
                printf("Enter value: ");
                scanf("%d", &val);
                delete_val(list, val);
                display(list);
                break;
            }
            case 8: {
                // Display
                display(list);
                break;
            }
            case 9: {
                // Exit
                destroy_list(list);
                return 0;
            }
            default: {
                printf("Invalid input\n");
                continue;
            }
        }
    }
    destroy_list(list);
    return 0;
}

List* init_list() {
    List *list = (List*) malloc(sizeof(List));
    list->last = NULL;
    list->no_of_elements = 0;
    return list;
}
Node * get_newNode(int val){
    Node * new_node = (Node*) malloc(sizeof(Node));
    new_node->data = val;
    new_node->next = NULL;
    return new_node;
}
void destroy_list(List *list) {
    if (list->last == NULL)
        return;

    Node *temp = list->last->next;
    Node *to_del = NULL;

    do {
        to_del = temp;                      // Store each ele in to_del
        if (to_del != NULL) {
            free(to_del);                   // If it exists then free the mem
        } 
        temp = temp->next;                  // traverse to next element
    } while (temp != list->last);

    if (list != NULL) {                     // Free the mem occupied by the list
        free(list);
    }
}

void insert_front(List *list, int val) {
    Node *new_node = get_newNode(val);
    ++list->no_of_elements;
    if(!list->last){                        // When list is empty
        list->last=new_node;                // last = first
        new_node->next=list->last;          // ptr to itself
        return;
    }
    new_node->next = list->last->next;
    list->last->next = new_node;
}

void insert_end(List *list, int val) {
    Node *new_node = get_newNode(val);
    ++list->no_of_elements;
    if(!list->last){
        list->last=new_node;
        new_node->next=list->last;
        return;
    }
    new_node->next = list->last->next;
    list->last->next = new_node;
    list->last=new_node;                    // Similar to front, only pt list->last to new node
}   

void insert_pos(List *list, int pos, int val) {
    Node *traverse = list->last;
    ++list->no_of_elements;
    // List is empty
    if (traverse == NULL || pos == 1) {
        return insert_front(list,val);      // If list empty, add to front
    }
    if( pos > list->no_of_elements){
        return insert_end(list,val);        // Can be ignored
    }

    Node* new_node = get_newNode(val);
    traverse = traverse->next;
    int counter = 2;                        // since adding to pos 1 is taken care of, ctr = 2
    do {
        if (pos == counter) {
            new_node->next = traverse->next;
            traverse->next = new_node;
            return;
        }
        traverse = traverse->next;
        ++counter;
    } while (traverse != list->last);
}

void delete_front(List *list) {
    if (list->last == NULL)
        return;

    Node* to_del = list->last->next;        // save first element to del_node to free memory later
    if(list->last == list->last->next)
        list->last = NULL;                  // If only one element then point last to NULL
    else
        list->last->next = to_del->next;    // Otherwise last will point to second element

    free(to_del);
    --list->no_of_elements;
}

void delete_end(List *list) {
    if (list->last == NULL)
        return;

    Node* end = list->last;
    if(list->last==list->last->next){
        list->last=NULL;                    // Only one element
        free(end);
        return;
    }
    Node *traverse = list->last;
    while(traverse->next!=list->last)       // Traverse till the last element
        traverse=traverse->next;
    
    list->last=traverse;                    // Iteration stops at second last, mark it as last
    traverse->next=end->next;               // point second last ele to first ele
    free(end);                              // free mem
    --list->no_of_elements;
    
}

void delete_pos(List *list, int pos) {
    if (list->last == NULL)
        return;

    if(pos==1)
        return delete_front(list);

    Node *curr = list->last->next;
    Node *prev = list->last;
    Node* to_del = NULL;

    int counter = 1;
    do {
        if (pos == counter) {
            to_del = curr;

            if (to_del == list->last) {         // If ele is the last ele, change pointer of last
                list->last = list->last->next;
            }
            prev->next = to_del->next;          // Change prev pointer irrespective of pos
            free(to_del);   
            --list->no_of_elements;
            return;
        }
        prev = curr;
        curr = curr->next;
        ++counter;
    } while (curr != list->last);
}

void delete_val(List *list, int val) {
        if (list->last == NULL)
        return;

    Node *curr = list->last->next;
    Node *prev = list->last;
    Node* to_del = NULL;

    do {
        if (val == curr->data) {
            to_del = curr;

            if (to_del == list->last) {         // If ele is the last ele, change pointer of last
                list->last = list->last->next;
            }
            prev->next = to_del->next;          // Change prev pointer irrespective of pos
            free(to_del);
            --list->no_of_elements;
            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != list->last);
}

void display(List *list) {
    if(list->last == NULL) {
        printf("END\n");
        return;
    }
    Node *traverse = list->last->next;      // Pointer to first ele
    do {
        printf("%d->", traverse->data);
        traverse = traverse->next;
    } while (traverse != list->last->next); // Traverse till last ele

    printf("END\n");
}