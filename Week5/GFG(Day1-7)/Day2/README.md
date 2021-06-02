## Nth Natural Number

Given a positive integer N. You have to find Nth natural number after removing all the numbers containing digit 9

### Example 1:

Input: N = 8

Output: 9

Explanation: After removing natural numbers which contains digit 9, first 8 numbers are 1,2,3,4,5,6,7,8 and 8th number is 8.

### Example 2:

Input: N = 9

Output: 10

Explanation: After removing natural numbers which contains digit 9, first 9 numbers are 1,2,3,4,5,6,7,8,10 and 9th number is 10.

### Your Task:  
You don't need to read input or print anything. Complete the function findNth() which accepts an integer N as input parameter and return the Nth number after removing all the numbers containing digit 9.


### Expected Time Complexity: O(logN)
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 ≤ N ≤ 10^12

### Hint:

- It is known that, digits of base 2 numbers varies from 0 to 1. Similarly, digits of base 10 numbers varies from 0 to 9.
- Therefore, the digits of base 9 numbers will vary from 0 to 8.
- It can be observed that Nth number in base 9 is equal to Nth number after skipping numbers containing digit 9.
- So the task is reduced to find the base 9 equivalent of the number N.