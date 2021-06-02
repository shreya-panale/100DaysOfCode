#User function Template for python3

class Solution:
    def findNth(self,N):
        #code here
        res = 0
        i = 1
        # convert N to base 9
        while(N > 0):
            res += i * ( N % 9 )    # i * remainder
            N = int(N / 9)
            i = i * 10              # Alternate soln is store each remainder in an array and read in reverse order
        return res
#{ 
#  Driver Code Starts
#Initial Template for Python 3

t=int(input())
for i in range(0,t):
    n=int(input())
    obj=Solution()
    s=obj.findNth(n)
    print(s)
# } Driver Code Ends