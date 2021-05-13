'''
Dice Game
Pragya and Tina love to play the Dice game whenever they are free. A dice contains 6 distinct numbers from 1 to 6.
Rules of the game are simple, they decide the number of games to be played represented by N, each game has two rounds,
in first round Pragya throws the dice and in the second round Tina throws the dice, player whose value after throwing the dice is greater wins that game.
If the values are the same than the game is declared a draw.

The player who won more games among the N games that are played in a day is declared as the winner of the day.

Input format
First line contains an integer N, representing the number of games to be played in a day.
Each of the next N lines contains two integers P and Q representing the dice value for Pragya and Tina respectively.

Output format
Print Pragya if Pragya is Winner of the day.
Print Tina if Tina is Winner of the day.
Print Draw if the number of games won by Pragya and Tina is equal.

Constraints
2<=N<=100
1<=P,Q<=6

Example
Input
3
1 3
2 2
4 5

Output
Tina

Sample test case explanation
Game1: Tina won
Game2: Draw
Game3: Tina won
So the Winner of the day is Tina.
'''

t=int(input())
c1=0
c2=0
for i in range(t):
  j,k=input().split()
  if(int(j)>int(k)):
    c1+=1
  elif(int(j)<int(k)):
    c2+=1
    
if(c1>c2):
  print("Pragya")
elif(c2>c1):
  print("Tina")
else:
  print("Draw")