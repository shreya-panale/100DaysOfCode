#User function Template for python3

class Solution:
    def findK(self, a, n, m, k):
        # Your code goes here
        top = 0
        left = 0
        right = m-1
        bottom = n-1
        dr = 0

        while(top <= bottom and left <= right):
            if(dr == 0):
                for i in range(left, right + 1):
                    k -= 1
                    if(k==0):
                        return a[top][i]    # top is the current row and column i will give kth element
                top += 1    # Incremeting by 1 because top row of matrix is visited

            elif(dr == 1):
                for i in range(top, bottom + 1):
                    k -= 1
                    if(k==0):
                        return a[i][right]  # right is the current column and row i will give kth element
                right -= 1  # column visited, reduce right by 1

            elif(dr == 2):
                for i in range(right, left - 1, -1):
                    k -= 1
                    if(k==0):
                        return a[bottom][i] # bottom = row, i = column
                bottom -= 1 # row visited, reduce bottom by 1

            elif(dr == 3):
                for i in range(bottom, top - 1, -1):
                    k -= 1
                    if(k==0):
                        return a[i][left]   # i = row, left = column
                left += 1   # column visited, increment left

            dr = (dr + 1) % 4 # change direction

        return -1;

#{
#  Driver Code Starts
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        matrix = [[0 for i in range(n[1])]for j in range(n[0])]
        c=0
        for i in range(n[0]):
            for j in range(n[1]):
                matrix[i][j] = arr[c]
                c+=1
        obj = Solution()
        print(obj.findK(matrix, n[0], n[1], n[2]))

# } Driver Code Ends
