/*
Sum of Digits
PrepBuddy gave you a number X and asks you to find the sum of the digits present in the number.

Input format
One integer is provided denoting the value of X.

Output format
Print the sum of digits of X.

Constraints
1<=X<=10^6

Time Limit
1 ​second

Example
Input
102345

Output
15

Sample test case explanation
Sum of digit = 1+0+2+3+4+5=15
*/

#include <stdio.h>

int main()
{
  // write your code here
  int x,temp_x,sum=0;
  scanf("%d",&x);
  while(x>=10){
    temp_x = x / 10;
    sum += x- (temp_x*10);
    x = temp_x;
  }
  printf("%d",sum+x);
  return 0;
}