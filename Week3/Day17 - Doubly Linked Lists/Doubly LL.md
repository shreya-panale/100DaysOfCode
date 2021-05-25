- A Doubly Linked List (DLL) contains an *extra* pointer, typically called **previous pointer**, together with next pointer and data which are there in singly linked list

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png" width="500"></img></p>

## 1. Advantages over singly linked list :

1. A DLL can be **traversed** in **both** forward and backward **direction**
2. The **delete** operation in DLL is more **efficient** if pointer to the node to be deleted is given
3. We can quickly insert a new node **before** a given node

## 2. Disadvantages over singly linked list :

1. Every node of DLL Require **extra space** for an previous pointer
2. All operations require an extra pointer previous to be **maintained**
    - For example, in insertion, we need to modify previous pointers together with next pointers

## 3. Insertion :

- Add a node at the front

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL_add_front1.png" width="500"></img></p>

- Add a node after a given node or a position

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL_add_middle1.png" width="500"></img></p>

- Add a node at the end

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL_add_end1.png" width="500"></img></p>

## 4. Deletion :

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/20200318150826/ezgif.com-gif-maker1.gif" width="500"></img></p>