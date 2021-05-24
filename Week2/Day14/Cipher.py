# HackerEarth Question
# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/

'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

import string
S=input()
N=int(input())
s1=""
i=0;
while(i<len(S)):
    if(ord("A")<=ord(S[i])<=ord("Z")):
        N1=N%26
        if((ord(S[i])+N1)<=90):
            s1+=chr(ord(S[i])+N1)
        else:
            s1+=chr(64+N1-abs(90-ord(S[i])))
    elif(ord("a")<=ord(S[i])<=ord("z")):
        N2=N%26
        if((ord(S[i])+N2)<=122):
            s1+=chr(ord(S[i])+N2)
        else:
            s1+=chr(96+N2-abs(122-ord(S[i])))
    elif(ord("0")<=ord(S[i])<=ord("9")):
        N2=N%10
        if(ord(S[i])+N2<=57):
            s1+=chr(ord(S[i])+N2)
        else:
            s1+=chr(47+N2-abs(57-ord(S[i])))
    else:
        s1+=S[i]
    i+=1
    

print(s1);