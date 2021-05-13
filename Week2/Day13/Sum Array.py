'''
Sum Array
Given an array of n integers find the sum of all the elements of the array.
Note: the elements of the array might be large.

Input format
First line contains integer t ,denoting the number of testcases. 
For each testcase:
First line contains an integer n.
Second line contains n space separated integers.

Output format
For each testcase print the sum of all the array elements on a new line.

Constraints
1<=t<=50
1<=n<=10^2
1<=arr[i]<=10^100

Time Limit
1 second

Example
Input
2
3 
10 20 30
4 
100 600 320 10

Output
60
1030
'''

t=int(input())
for i in range(t):
  n = int(input().strip())
  arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
  print(sum(arr))