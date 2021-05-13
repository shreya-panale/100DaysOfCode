import sys

class Solution:
    # Write your code here
    def __init__(self):
        self.stack = []
        self.top=-1
        self.queue = []
    def pushCharacter(self,s):
        self.stack.append(s)
        self.top+=1
    def enqueueCharacter(self,s):
        self.queue.append(s)
    def popCharacter(self):
        self.top-=1
        return self.stack[self.top+1]
    def dequeueCharacter(self):
        x = self.queue[0]
        self.queue=self.queue[1:]
        return x
        
        
# read the string s
s=input()
#Create the Solution class object
obj=Solution()   

l=len(s)
# push/enqueue all the characters of string s to stack
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
    
isPalindrome=True
'''
pop the top character from stack
dequeue the first character from queue
compare both the characters
''' 
for i in range(l // 2):
    if obj.popCharacter()!=obj.dequeueCharacter():
        isPalindrome=False
        break
#finally print whether string s is palindrome or not.
if isPalindrome:
    print("The word, "+s+", is a palindrome.")
else:
    print("The word, "+s+", is not a palindrome.")    