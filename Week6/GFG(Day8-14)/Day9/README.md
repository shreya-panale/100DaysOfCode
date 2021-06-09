## Dam of Candies

Professor McGonagall teaches transfiguration at Hogwarts. She has given Harry the task of changing himself into a cat. She explains that the trick is to analyze your own DNA and change it into the DNA of a cat. The transfigure spell can be used to pick any one character from the DNA string, remove it and insert it in the beginning.
Help Harry calculates minimum number of times he needs to use the spell to change himself into a cat.

### Example 1:

Input:
- A = "GEEKSFORGEEKS"
- B = "FORGEEKSGEEKS"

Output: 3

Explanation: The conversion can take place  in 3 operations:
1. Pick 'R' and place it at the front,
   A="RGEEKSFOGEEKS"
2. Pick 'O' and place it at the front,
   A="ORGEEKSFGEEKS"
3. Pick 'F' and place it at the front,
   A="FORGEEKSGEEKS"

### Example 2:

Input:
- A = "ABC"
- B = "BCA"

Output: 2

Explanation: The conversion can take place in 2 operations:
1. Pick 'C' and place it at the front,
   A = "CAB"
2. Pick 'B' and place it at the front,
   A = "BCA"

### Your Task:  
You don't need to read input or print anything. Complete the function transfigure() which takes strings A and B as input parameters and returns the minimum number of spells needed. If it is not possible to convert A to B then return -1.


### Expected Time Complexity: O(max(|A|, |B|))
### Expected Auxiliary Space: O(1)

### Constraints:
- 1 ≤ |A|, |B| ≤ 10^5
- A and B consists of lowercase and uppercase letters of english alphabet only.

### Hint:
- Firsly, we need to check whether such a conversion is possible or not, the frequency of all the elements in A must be same as the frequency of all the elements in B.
- Start matching from last characters of both strings. If last characters match, then our task reduces to remaining characters. If last characters don’t match, then find the position of B’s mismatching character in A. The difference between two positions indicates that these many characters of A must be moved.
