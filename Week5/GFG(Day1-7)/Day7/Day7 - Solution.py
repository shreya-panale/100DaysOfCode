class Solution:
    def ValidPair(self, a, n):
    	# Your code goes here
    	a.sort()
    	ans=0
    	front = 0
    	tail = n-1
    	while(front<tail):
    	    if(a[front]+a[tail]>0):
    	        print(a[front],a[tail])
    	        ans+=(tail-front)
    	        tail-=1
	        else:
	            front+=1
        return ans


#{
#Driver Code Starts.

if __name__ == '__main__':
	t = int(input())
	for _ in range(t):
		n = int(input())
		array = list(map(int, input().strip().split()))
		obj = Solution()
		ans = obj.ValidPair(array, n)
		print(ans)



#} Driver Code Ends
