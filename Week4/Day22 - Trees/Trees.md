- Hierarchical data structures

<p align="center"><img src="https://www.tutorialride.com/images/data-structures/structure-of-tree.jpeg" width="300"></img></p>

## Terms and its Description

1. ***Root*** : Root is the topmost element in a tree. The entire tree is referenced through it. It does not have a parent

2. ***Parent Node*** : Parent node is an immediate predecessor of a node

3. ***Child Node*** : All immediate successors of a node are its children

4. ***Siblings*** : Nodes with the same parent are called Siblings

5. ***Path*** : Path is a number of successive edges from source node to destination node

6. ***Height of Node*** : Height of a node represents the number of edges on the longest path between that node and a leaf

7. ***Height of Tree*** : Height of tree represents the height of its root node

8. ***Depth of Node*** : Depth of a node represents the number of edges from the tree's root node to the node

9. ***Degree of Node*** : Degree of a node represents a number of children of a node

10. ***Edge*** : Edge is a connection between one node to another. It is a line between two nodes or a node and a leaf

## Binary Tree

- A tree whose elements have ***at most 2*** children, named left and right
- Node Structure in C :
            
        struct node
        {
            int data;
            struct node* left;
            struct node* right;
        };

- In Python :

        class Node:
        def __init__(self,key):
            self.left = None
            self.right = None
            self.val = key


<p align="center"><img src="https://www.tutorialride.com/images/data-structures/binary-tree-using-array.jpeg" width="300"></img></p>