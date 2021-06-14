## Stock span problem

The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days.
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.

### Example 1:

Input:  N = 7, price[] = [100 80 60 70 60 75 85]

Output: 1 1 1 2 1 4 6

Explanation: Traversing the given input span for 100 will be 1, 80 is smaller than 100 so the span is 1, 60 is smaller than 80 so the span is 1, 70 is greater than 60 so the span is 2 and so on. Hence the output will be 1 1 1 2 1 4 6.

### Example 2:

Input:  N = 6, price[] = [10 4 5 90 120 80]

Output: 1 1 2 4 5 1

Explanation: Traversing the given input span for 10 will be 1, 4 is smaller than 10 so the span will be 1, 5 is greater than 4 so the span will be 2 and so on. Hence, the output will be 1 1 2 4 5 1.

### Your Task:  
The task is to complete the function calculateSpan() which takes two parameters, an array price[] denoting the price of stocks, and an integer N denoting the size of the array and number of days. This function finds the span of stock's price for all N days and returns an array of length N denoting the span for the i-th day.


### Expected Time Complexity: O(N)
### Expected Auxiliary Space: O(N)

### Constraints:
- 1 ≤ N ≤ 10^5
- 1 ≤ C[i] ≤ 10^5

### Hint:

We see that S[i] on day i can be easily computed if we know the closest day preceding i, such that the price is greater than on that day than the price on the day i. If such a day exists, let’s call it h(i), otherwise, we define h(i) = -1.
- The span is now computed as S[i] = i – h(i)
- To implement this logic, we use a stack as an abstract data type to store the days i, h(i), h(h(i)), and so on. When we go from day i-1 to i, we pop the days when the price of the stock was less than or equal to price[i] and then push the value of day i back into the stack.
