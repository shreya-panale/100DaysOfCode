#User function Template for python3

class Solution:
    def transfigure(self, A, B):
        # code here
        m = len(A)
        n = len(B)

        # Check whether conversion is possible or not
        if n!=m:
            return -1
        # Check Frequency
        chars=set(A)
        for char in chars:
            if(A.count(char)!=B.count(char)):
                return -1

        res=0
        i=n-1
        j=n-1
        while(i>=0):
            # If there is a mismatch, then keep incrementing res until B[j] is not found in A[0..i]
            while(i>=0 and A[i]!=B[j]):
                i-=1
                res+=1
            # If A[i] and B[j] match
            if(i>=0):
                i-=1
                j-=1
        return res


#{
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        line = input().strip().split()
        A = line[0]
        B = line[1]
        obj = Solution();
        print(obj.transfigure(A,B))


# } Driver Code Ends
