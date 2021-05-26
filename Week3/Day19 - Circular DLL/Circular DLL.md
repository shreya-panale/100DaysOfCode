Circular Doubly Linked List has properties of both doubly linked list and circular linked list
- Two consecutive elements are linked by previous and next pointer
- The last node points to first node by next pointer
- The first node points to last node by previous pointer

## Structure of the node

    struct node
    {
        int data;
        struct node *next; // Pointer to next node
        struct node *prev; // Pointer to previous node
    };

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/Circular-doubly-linked-list.png" width="500"></img></p>

## Advantages : 

1. List can be traversed from both the directions 
2. Jumping from head to tail or from tail to head is done in constant time O(1).

## Disadvantages :

1. Extra memory in each node to accommodate previous pointer
2. Lots of pointers involved while implementing or doing operations on a list.  
    - Pointers should be handled carefully otherwise data of the list may get lost.

## Applications : 

1. Managing songs playlist in media player applications.
2. Managing shopping cart in online shopping.

## Insertion :

1. At the Beginning :

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/Insertion-at-beginning-of-list.png" width="500"></img></p>

2. At the End :

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/Insertion-in-a-list.png" width="500"></img></p>

3. In between two nodes :
<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/Insertion-in-between-the-list.png" width="500"></img></p>
