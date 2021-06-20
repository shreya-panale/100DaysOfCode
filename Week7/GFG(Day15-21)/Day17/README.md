## Nth node from end of linked list

Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

### Example 1:

Input: N = 2
- LinkedList: 1->2->3->4->5->6->7->8->9

Output: 8

Explanation: In the first example, there are 9 nodes in linked list and we need to find 2nd node from end. 2nd node from end is 8.  

### Example 2:

Input: N = 5
= LinkedList: 10->5->100->5

Output: -1

Explanation: In the second example, there are 4 nodes in the linked list and we need to find 5th from the end. Since 'n' is more than the number of nodes in the linked list, the output is -1.

### Expected Time Complexity: O(N)
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 <= L <= 10^3
- 1 <= N <= 10^3

### Hint - Algorithm:

There are multiple ways to solve this problem.

- First approach is to calculate the length of the linked list (L)and subtract n(position from the back) from it to get the position of the desired node from the front.
- Another approach is to use two pointers. Both pointers are initialized to head. Traverse n nodes from head with first pointer. Then the second pointer and the first pointer start moving simultaneously. This keeps on going till the first pointer becomes null. At this point the second pointer will be at the desired node i.e. at nth node from end since the first pointer had traversed n elements previously and thus had difference of n nodes with second pointer.
