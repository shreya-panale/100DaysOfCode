## 1. Return values of printf() and scanf()

- ***printf()*** : It returns **total number** of **Characters Printed**, Or *negative value* if an *output error* or an *encoding error*

- ***scanf()*** : It returns **total number** of **Inputs Scanned successfully**, or *EOF* if *input failure* occurs before the first receiving argument was assigned

## 2. Return type of getchar(), fgetc() and getc()

- It returns the *character* that was read in the *form* of an **integer** or **EOF** if an error occurs

    Example1 :

        #include <stdio.h>
        int main (){
        int i;
        printf("Enter a character: ");
        i = getchar();
        printf("\nThe character entered is: ");
        putchar(i);
        return(0);
        }

    Output :
        
        Enter a character: G
        The character entered is: G

- The difference between getc() and getchar() is getc() can read from any input stream, but getchar() reads from standard input. So getchar() is equivalent to getc(stdin)

    Example2 : The fgetc() function obtains a character from a file stream which is a pointer to a FILE object

        while((i=fgetc(fp))!=EOF){
        printf("%c",i);
        }

## 3. Scansets in C

- Inside scanset, we can specify single character or range of characters. While processing scanset, scanf will process only those characters which are part of scanset

- represented by %[]

        scanf("%[A-Z]s", str);
        Input  => ABCdef
        Output => str = ABC

    Example : Scanning string with spaces

        scanf("%[^\n]s", str);

## 4. puts() vs printf()

- ***puts()*** : It is used to print the **string** on the output stream with the **additional new line** character ‘\n’
    - It *moves* the *cursor* to the next line
    - Implementation is *easier*
    - If you do not want the cursor to be moved to next line, then you can use following variation of puts()

            fputs(str, stdout)

- ***printf()*** : It is used to print the **text** along with the **values** of variables
    - Implementation is **complex** => **expensive** than puts()

## 5. What is the difference between printf, sprintf and fprintf?

- ***printf*** : It is used to print **character stream** of data on **stdout console**
- ***sprintf*** : Instead of printing on console, store it on **char buffer** which are specified in sprintf

        sprintf(buffer, "String");
        buffer => "String"

- ***fprintf*** : print the string content in **file** but not on stdout console

        fprintf(fptr,"String");
        It will store the String in the file which is referred by the file pointer 

## 6. What is use of %n in printf() ?

- %n is a special format specifier
- It cause printf() to load the variable pointed by corresponding argument
- number of characters printed by printf() before the occurrence of %n is stored in the variable
- Example : 

        printf("The value of %ns : ", &s);
        s => 13

## 7. Difference between %d and %i format specifier :

- Behave similar in printf
- Different in scanf :
    - ***%d*** : takes integer value as **signed decimal** integer i.e. it takes negative values along with positive values but values should be in **decimal** **otherwise** it will print **garbage value**
        - **Note**: if input is in octal format like : 012 then %d will ignore 0 and take input as 12
    - ***%i***: takes integer value as integer value with **decimal**, **hexadecimal** or **octal** type
        - **hexadecimal format** : value should be provided by preceding "0x" 
        - **octal format** : value should be provided by preceding "0". 

## 8. rand() and srand() :

- The ***rand()*** function is used to generate random numbers in the range [0, RAND_MAX]
- If random numbers are generated with rand() **without** first calling **srand()**, your program will create the **same sequence** of numbers each time it runs

        printf(" %d ", rand()); //Will print same value each time you run the program

- The ***srand()*** function sets the starting point for producing a series of pseudo-random integers
    - If srand() is not called, the rand() seed is set as if **srand(1)** were called at program start
    - Any other value for seed sets the generator to a different starting point
    - Example 

            // Use current time as seed for random generator
            srand(time(0));
            printf(" %d ", rand()); //Will print differnet value each time you run the program

## 9. printable and control character

- The ***isprint()*** function checks whether a character is a printable character or not
    - takes **single argument** in the **form** of an **integer** and **returns** a value of type **int**
    - **char** input is converted to **ASCII** value

- The iscntrl() function is used to checks whether a character is a control character or not
    - It also takes a **single argument** and **return** an **integer**.

            Input  : a
            Output : a is printable character
                    a is not control character
                    
            Input  : \r
            Output : is not printable character
                    is control character
    
## 10. Problem with scanf() when there is fgets()/gets()/scanf() after it

- every *scanf() leaves* a **newline character** in **buffer** that is **read** by **next** scanf
- How to solve above problem?
    - We can make scanf() to read a new line by using an **extra "\n"**, i.e., scanf("%d\n", &x) . 
    - In fact scanf("%d ", &x) also works (**Note extra space**).
    - We can add a **getchar() after scanf()** to read an extra newline