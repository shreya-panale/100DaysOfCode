#User function Template for python3
class Solution:
    def calculateSpan(self,a,n):
        Span = [0 for i in range(n)]
        stack = [0]
        #span value of first day is always 1.
        Span[0] = 1

        for i in range(1, n):
            #we pop elements from the stack till price at top of stack is less than or equal to current price.
            while (len(stack) > 0 and a[stack[-1]] <= a[i]):
                stack.pop()

            #if stack becomes empty, then price[i] is greater than all elements on left of it in list so span is i+1.
            #Else price[i] is greater than elements after value at top of stack.
            if(len(stack) <= 0):
                Span[i] = i + 1
            else:
                Span[i] = i - stack[-1]

            #pushing this element to stack.
            stack.append(i)

        #returning the list.
        return Span

#{
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        a = list(map(int,input().strip().split()))
        obj = Solution()
        ans = obj.calculateSpan(a, n);
        print(*ans) # print space seperated elements of span array
# } Driver Code Ends
