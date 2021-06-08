#User function Template for python3

class Solution:
    def maxCandy(self, height, n):
        # Your code goes here
        first=0
        last=n-1
        maxCandy=0
        while(first<last):
            # Move Forward only if the height of book is greater than the current bpok
            if(height[first]<height[last]):
                maxCandy=max(maxCandy,(last-first-1)*height[first])
                first+=1
            elif(height[last]<height[first]):
                maxCandy=max(maxCandy,(last-first-1)*height[last])
                last-=1
            else:
                maxCandy=max(maxCandy,(last-first-1)*height[first])
                first+=1
                last-=1
        return maxCandy

#{
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        obj = Solution()
        print(obj.maxCandy(arr,n))



# } Driver Code Ends
