# HackerEarth Question
# https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/

n = int(input())
nums = list(map(int, input().split()))
 
cum_sum = [0,]
for i in range(n):
    cum_sum.append(cum_sum[i] + nums[i])
 
possible_jumps = []
i = 1
while ((i * i + i) // 2) <= n:
    possible_jumps.append((i * i + i) // 2)
    i += 1
 
cur_possible_jump = possible_jumps.pop()
max_sum = -100000000
for i in range(n):
    elements_left = n - i
    if elements_left < cur_possible_jump:
        cur_possible_jump = possible_jumps.pop()
 
    cur_sum = cum_sum[i + cur_possible_jump] - cum_sum[i]
    if cur_sum > max_sum:
        max_sum = cur_sum
 
print(max_sum)