# Enter your code here. Read input from STDIN. Print output to STDOUT
from sys import stdin

n=int(input())
phonebook={}
for i in range(n):
    name,num=input().split(' ')
    phonebook[name]=num
for name in stdin:
    key=name.split()[0]
    if key in phonebook:
        print(key,"=",phonebook[key],sep="")
    else:
        print("Not found")
            
    