## Number of minimum picks to get 'k' pairs of socks from a drawer

A drawer contains socks of ***n*** different colors. The number of socks available of ***ith*** color is given by ***a[i]*** where a is an array of n elements. Tony wants to take k pairs of socks out of the drawer. However, he cannot see the color of the sock that he is picking. You have to tell what is the minimum number of socks Tony has to pick in one attempt from the drawer such that he can be absolutely sure, without seeing their colors, that he will have at least k matching pairs.

### Example 1:

Input:
- N = 4, K = 6
- a[] = {3, 4, 5, 3}

Output: 15

Explanation: All 15 socks have to be picked in order to obtain 6 pairs.

### Example 2:

Input:
- N = 2, K = 3
- a[] = {4, 6}

Output: 7

Explanation: The Worst case scenario after 6 picks can be {3,3} or {1,5} of each colored socks. Hence 7th pick will ensure 3rd pair.

### Your Task:  
You don't need to read input or print anything. Complete the function find_min() which takes the array a[], size of array N, and value K as input parameters and returns the minimum number of socks Tony has to pick. If it is not possible to pick then return -1.

### Expected Time Complexity: O(N)
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 ≤ N ≤ 10^5
- 1 ≤ a[i] ≤ 10^6

### Hint:
- Count the maximum number of pairs that can be formed.
