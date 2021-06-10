#User function Template for python3

class Solution:
    def repeatedStringMatch(self, A, B):
        # code here
        count = int(len(B)/len(A))
        if(B in A*count):
            return count
        elif(B in A*(count+1)):
            return count+1
        elif(B in A*(count+2)): #Was needed for one case
        '''Input:A = orpjir
        B = jirorpjirorpjirorpjirorpjirorpjirorpjirorpjiror
        Its Correct output is:9
        And Your Code's output is:-1'''
            return count+2
        else:
            return -1
#{
#  Driver Code Starts
#Initial Template for Python 3

if __name__=="__main__":
    t=int(input())
    for _ in range(t):
        A=input().strip()
        B=input().strip()
        obj = Solution()
        print(obj.repeatedStringMatch(A,B))
# } Driver Code Ends
