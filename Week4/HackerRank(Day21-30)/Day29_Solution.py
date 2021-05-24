import sys

def max_result(n, k):
    max_and = 0
    for i in range(1, n):
        for j in range(i+1,n+1):
            bitwise_and = i & j 
            if max_and < bitwise_and < k:
                max_and = bitwise_and
                if max_and == k-1:
                    return max_and

    return max_and
    
t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    print(max_result(n, k))