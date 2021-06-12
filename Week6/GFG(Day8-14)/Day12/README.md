## Intersection Point in Y Shapped Linked Lists

Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

### Example 1:

Input:
- LinkList1 = 3->6->9->common
- LinkList2 = 10->common
- common = 15->30->NULL

Output: 15

Explanation:

    3
      6
        9   10
          15
          30

### Example 2:

Input:
- Linked List 1 = 4->1->common
- Linked List 2 = 5->6->1->common
- common = 8->4->5->NULL

Output: 8

Explanation:

    4              5
    |              |
    1              6
    \             /
    8   -----  1
     |
     4
     |
    5
    |
    NULL  
### Your Task:  
You don't need to read input or print anything. The task is to complete the function intersetPoint() which takes the pointer to the head of linklist1(head1) and linklist2(head2) as input parameters and returns data value of a node where two linked lists intersect. If linked list do not merge at any point, then it should return -1.
Challenge : Try to solve the problem without using any extra space.

### Expected Time Complexity: O(N+M)
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 ≤ N + M ≤ 2*10^5
- -1000 ≤ value ≤ 1000

### Hint:
- Method Using difference of node counts:
  - Get count of the nodes in the first list, let be c1.
  - Get count of the nodes in the second list, let be c2.
  - Get the difference of counts d = abs(c1 - c2).
  - Now traverse the bigger list from the first node till d nodes so that from here onwards both the lists have equal no of nodes.
  - Then we can traverse both the lists simultaneously till we come across a common node.
