import re

def printNames(dict):
    for Name in sorted (dict.keys()) : 
        for i in range(len(dict[Name])):
            print(Name)
    
if __name__ == '__main__':
    N = int(input().strip())
    dict = {}
    for N_itr in range(N):
        first_multiple_input = input().rstrip().split()
        firstName = first_multiple_input[0]
        emailID = first_multiple_input[1]
        
        if(re.findall("@gmail.com$", emailID)):
            emailList = []
            emailList = [emailID]
            if(firstName in dict and (emailID not in dict[firstName])):
                emailList = dict[firstName] + emailList
            dict[firstName] = emailList
    printNames(dict)