'''
Leap Year or Not
We all have made fun of our friends who have their birthdays on 29th February.
Given birthday year N of your friend, can you tell her if that is leap year or not? 

Input format
The first line constains an integer T denoting the number of test cases.
Each test case contains one integer N.

Output format
For each test case on a new line, print Yes if the given year is a leap year else print No.

Constraints
1<=T<=10
1<=N<=2500

Time Limit
1 ​second

Example
Input
2
1900
2012

Output
No
Yes
'''
def checkYear(year):
    if (year % 4) == 0:
        if (year % 100) == 0:
            if (year % 400) == 0:
                return True
            else:
                return False
        else:
             return True
    else:
        return False
        
T = int(input())
for i in range(T):
  yr = int(input())
  if(checkYear(yr)):
    print("Yes")
  else:
    print("No")