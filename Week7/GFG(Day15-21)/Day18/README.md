## Diameter of Binary Tree

Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).

### Example 1:

Input:

            1
          /   \
         2     3

Output: 3

### Example 2:

Input:

             10
            /   \
          20    30
        /   \
       40   60

Output: 4

### Expected Time Complexity: O(N)
### Expected Auxiliary Space: O(Height of Tree)

### Constraints:
- 1 <= Number of nodes <= 10000
- 1 <= Data of a node <= 1000

### Hint - Algorithm:

The diameter of a tree T is the largest of the following quantities:

  1. The diameter of T’s left subtree.
  2. The diameter of T’s right subtree.
  3. The longest path between leaves that goes through the root of T (this can be computed from the heights of the subtrees of T).
