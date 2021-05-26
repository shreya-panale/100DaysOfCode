- A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations
- The elements in a linked list are linked using pointers

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png" width="500"></img></p>

## 1. Advantages over arrays :
    
1. Dynamic size
2. Ease of insertion/deletion

## 2. Drawbacks :

1. Random access is not allowed
    - We have to access elements sequentially starting from the first node. So we cannot do binary search with linked lists efficiently with its default implementation
2. Extra memory space for a pointer is required for each element of the list
3. Not cache friendly
    - Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists

## 3. Representation :

- In C :

        // A linked list node
        struct Node {
            int data;
            struct Node* next;
        };

- In Python :

        # Node class
        class Node:
            # Function to initialize the node object
            def __init__(self, data):
                self.data = data # Assign data
                self.next = None # Initialize next as null

        # Linked List class
        class LinkedList:
            # Function to initialize the Linked List object
            def __init__(self):
                self.head = None

