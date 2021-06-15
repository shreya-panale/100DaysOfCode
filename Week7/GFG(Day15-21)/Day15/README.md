## Triplet Sum in Array

Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

### Example 1:

Input: n = 6, X = 13
- arr[] = [1 4 45 6 10 8]

Output: 1

Explanation: The triplet {1, 4, 8} in the array sums up to 13.

### Example 2:

Input: n = 5, X = 10
- arr[] = [1 2 4 3 6]

Output: 1

Explanation: The triplet {1, 3, 6} in the array sums up to 10.

### Your Task:  
You don't need to read input or print anything. Your task is to complete the function find3Numbers() which takes the array arr[], the size of the array (n) and the sum (X) as inputs and returns True if there exists a triplet in the array arr[] which sums up to X and False otherwise.


### Expected Time Complexity: O(n^2)
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 ≤ n ≤ 10^3
- 1 ≤ A[i] ≤ 10^5

### Hint - Algorithm:

1. Sort the given array.
2. Loop over the array and fix the first element of the possible triplet, arr[i].
3. Then fix two pointers, one at i + 1 and the other at n – 1. And look at the sum,
  - If the sum is smaller than the required number, increment the first pointer.
  - Else, If the sum is bigger, decrease the end pointer to reduce the sum.
  - Else, if the sum of elements at two-pointer is equal to given number return true.
