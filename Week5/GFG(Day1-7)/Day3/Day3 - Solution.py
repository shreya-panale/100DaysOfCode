#User function Template for python3

class Solution:
    def smallestpositive(self, array, n): 
        # Your code goes here  
        array.sort()
        res = 1
        for i in range (n):
            if array[i] <= res:
                res = res + array[i]    # Takes care of sum of combinations
            else:
                break
        return res
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        n = int(input())
        array = list(map(int, input().strip().split()))
        ob = Solution()
        print(ob.smallestpositive(array,n))


# } Driver Code Ends