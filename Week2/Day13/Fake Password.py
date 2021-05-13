'''
Fake Password
And you thought array rotation has no real-life use? PrepBud has a password for his locker which he has written on a piece of paper. He leaves the paper on the table and goes out for grabbing some food.
When he comes back he finds that paper is replaced and hence the password is changed. He does not remember his password exactly but he tries his best to recall his old password.
After a long time and lots of effort, he came up with a guess that the original password can be obtained by rotating a fake password by 2 places.
Since you are learning programming and you have become a good programmer by now, he wants you to write this code to check whether the original password can be obtained by rotating a fake password by 2 places.

Input Format
The first line contains an integer T, denoting the number of test cases. 
Each test case consists of two lines,
The first line contains the original password as a string O (containing only lowercase characters).
The second line contains a fake password as a string F (containing only lowercase characters).

Output Format
For each test case on a new line, print Yes or No depending upon whether the condition is satisfied or not.

Constraints
1<=T<=10
2<=|O|,|F|<=10^7, where |O| and |F| are length of string O and F respectively.

Time Limit
1 second

Example
Input
2
string
ngstri
study
ystud

Output
Yes
No
'''

t=int(input())
for i in range(t):
  o=input()
  f=input()
  if(o==(f[2:]+f[:2]) or o==(f[-2:]+f[:-2])):
    print("Yes")
  else:
    print("No")