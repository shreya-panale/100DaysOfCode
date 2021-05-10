- Strings are defined as an array of characters
- The difference between a character array and a string is the string is terminated with a special character ‘\0’
## 1. Declaration of strings :

        char str_name[size];

## 2. Initializing a String :

        1. char str[] = "Geeks";

        2. char str[50] = "Geeks";

        3. char str[] = {'G','e','e','k','\0'};

        4. char str[14] = {'G','e','e','k','\0'};

### Memory Representation of a string "Geeks" :
<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/finnnal.png" width="300"></img></p>

## 3. Read a string from user : 
- As str[] is a character array so using str without braces ‘[‘ and ‘]’ will give the base address of this string. That’s why we have not used '&'

        scanf("%s",str);

## 4. Passing strings to function :
- As strings are character arrays, so we can pass strings to function in a same way we pass an array to a function

        void printStr(char str[])
        {
            printf("String is : %s",str);
        }

## 5. Functions & their Purpose :

- strcpy(s1, s2);
    - Copies string s2 into string s1.

- strcat(s1, s2);
    - Concatenates string s2 onto the end of string s1.

- strlen(s1);
    - Returns the length of string s1.

- strcmp(s1, s2);
    - Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.

- strchr(s1, ch);
    - Returns a pointer to the first occurrence of character ch in string s1.

- strstr(s1, s2);
    - Returns a pointer to the first occurrence of string s2 in string s1.

