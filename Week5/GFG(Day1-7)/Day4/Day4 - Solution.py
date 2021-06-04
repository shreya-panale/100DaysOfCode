#User function Template for python3

class Solution:
    def find_min(self, a, n, k):
        #Code Here
        max_pairs = 0
        x = 0

        for i in a:
            max_pairs += i//2
            x += (i-1)//2       # i = even => (i-2)/2; i = odd => (i-1)/2; ~ (i-1)//2

        if(max_pairs < k):
            return -1

        # (k-1)pairs are picked + one of each color + any color sock will give kth pair
        #       2*(k-1)         +         n         +             1
        if(k <= x):
            return (2*(k-1) + n + 1)
        # If x pairs are picked + one of each color + then (k-x) more to be picked to get k pairs
        #       2*x             +         n         +         ( k - x )
        else:
            return ( 2*x + n + (k - x) )


#{
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int,input().split()))
        k = int(input())
        obj = Solution()
        print(obj.find_min(a,n,k))

# } Driver Code Ends
