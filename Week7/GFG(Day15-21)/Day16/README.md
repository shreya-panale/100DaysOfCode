## Determine if Two Trees are Identical

Given two binary trees, the task is to find if both of them are identical or not.

### Example 1:

Input:

       1          1
     /   \      /   \
    2     3    2     3

Output: Yes

Explanation: There are two trees both having 3 nodes and 2 edges, both trees are identical having the root as 1, left child of 1 is 2 and right child of 1 is 3.

### Example 2:

Input:

        1          1
      /   \      /   \
    2      3    3     2

Output: No

Explanation: There are two trees both having 3 nodes and 2 edges, but both trees are not identical.

### Your Task:  
Since this is a functional problem you don't have to worry about input, you just have to complete the function isIdentical() that takes two roots as parameters and returns true or false. The printing is done by the driver code.


### Expected Time Complexity: O(N)
### Expected Auxiliary Space: O(Height of Tree)

### Constraints:
- 1 <= Number of nodes <= 10^5
- 1 <=Data of a node <= 10^5

### Hint - Algorithm:

1. If both nodes are empty then return 1.
2. Else If both nodes are non-empty
     (a) Check data of the root nodes (tree1->data ==  tree2->data)
     (b) Check left subtrees recursively.
     (c) Check right subtrees recursively.
     (d) If a,b and c are true then return 1.
3.  Else return 0 (one is empty and other is not).
