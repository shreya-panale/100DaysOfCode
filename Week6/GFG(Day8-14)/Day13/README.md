## Infix to Postfix

Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

- Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
- Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
- Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -.

### Example 1:

Input: str = "a+b*(c^d-e)^(f+g*h)-i"

Output: abcd^e-fgh*+^*+i-

Explanation: After converting the infix expression into postfix expression, the resultant expression will be abcd^e-fgh*+^*+i-

### Example 2:

Input: str = "A*(B+C)/D"

Output: ABC+*D/

Explanation: After converting the infix expression into postfix expression, the resultant expression will be ABC+*D/

### Your Task:  
This is a function problem. You only need to complete the function infixToPostfix() that takes a string(Infix Expression) as a parameter and returns a string(postfix expression). The printing is done automatically by the driver code.


### Expected Time Complexity: O(|str|)
### Expected Auxiliary Space: O(|str|)

### Constraints:
- 1 ≤ |str| ≤ 10^5

### Hint: Algorithm

- Iterate over the given string.
- If current character is an operand, add it to output string.
- Else if current character is ‘(‘, push it to the stack.
- Else if current character is ‘)’, pop the elements from stack and add to output string until ‘(‘ is encountered in stack.
- Else current character is an operator so while precedence of current character is less than or equal to precedence of top of stack pop the top element and add it to the output string. Push the current character in the stack.
- After iteration, pop all the remaining elements from the stack and add them to output string.
- Return the output string.
