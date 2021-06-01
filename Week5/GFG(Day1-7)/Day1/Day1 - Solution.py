class Solution:
    def prank(self, a, n): 
        #code here
        # a = [0, 5, 1, 2, 4, 3]
        for i in range(n):
            a[i] += (a[a[i]] % n) * n;
        # a = [0, 23, 31, 8, 28, 15]
        for i in range(n):
            a[i] = int(a[i]/n);
        # a = [0, 3, 5, 1, 4, 2]
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().strip().split()))
        ob = Solution()
        ob.prank(a, n)
        for i in a:
            print(i,end=" ")
        print()
# } Driver Code Ends