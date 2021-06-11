## Reverse a linked list

Given a linked list of N nodes. The task is to reverse this list.

### Example 1:

Input: LinkedList: 1->2->3->4->5->6

Output: 6 5 4 3 2 1

Explanation: After reversing the list, elements are 6->5->4->3->2->1.

### Example 2:

Input: LinkedList: 2->7->8->9->10

Output: 10 9 8 7 2

Explanation: After reversing the list, elements are 10->9->8->7->2.

### Your Task:  
The task is to complete the function reverseList() with head reference as the only argument and should return new head after reversing the list.


### Expected Time Complexity: O(N)
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 <= N <= 10^4

### Hint:
- Initialize three pointers prev as NULL, current as head and next as NULL.
- Iterate through the linked list. In loop, do following.
  1. Before changing next of current, store next node.
            next = curr->next
  2. Now change next of current. This is where actual reversing happens.
            curr->next = prev
  3. Move prev and current one step forward 
            prev = curr
            curr = next
