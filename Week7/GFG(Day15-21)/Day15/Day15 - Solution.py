#User function Template for python3
class Solution:

    #Function to find if there exists a triplet in the
    #array A[] which sums up to X.
    def find3Numbers(self,A, n, X):
        # Your Code Here
        A.sort()
        for i in range(n-2):
            start=i+1
            end=n-1
            sum1=0
            while(sum1!=X and end>start):
                sum1=A[i]+A[start]+A[end]
                if(sum1>X):
                    end-=1
                elif(sum1<X):
                    start+=1
                else:
                    return 1
        return 0
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

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n,X=map(int,input().strip().split())
        A=list(map(int,input().strip().split()))
        ob=Solution()
        if(ob.find3Numbers(A,n,X)):
            print(1)
        else:
            print(0)
# } Driver Code Ends
