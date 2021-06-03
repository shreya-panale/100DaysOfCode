## Smallest Positive Integer that can not be represented as Sum

Given an array of size N, find the smallest positive integer value that cannot be represented as sum of some elements from the array.

### Example 1:

Input:
- N = 6
- array[] = {1, 10, 3, 11, 6, 15}

Output: 2

Explanation: 2 is the smallest integer value that cannot be represented as sum of elements from the array.

### Example 2:

Input:
- N = 3
- array[] = {1, 1, 1}

Output: 4

Explanation: 
- 1 is present in the array. 
- 2 can be created by combining two 1s.
- 3 can be created by combining three 1s.
- 4 is the smallest integer value that cannot be represented as sum of elements from the array.

### Your Task:  
You dont need to read input or print anything. Complete the function smallestpositive() which takes the array and N as input parameters and returns the smallest positive integer value that cannot be represented as sum of some elements from the array.

### Expected Time Complexity:O(N * Log(N))
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 ≤ N ≤ 10^6
- 1 ≤ array[i] ≤ 10^9
- Array may contain duplicates.

### Hint:
Sort the array. Then traverse the sorted array from left to right and observe the numbers you are able to build with each addition. 