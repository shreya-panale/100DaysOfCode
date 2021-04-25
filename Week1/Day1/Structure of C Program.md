<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/StructureOfCprogram.png" alt="drawing" width="300"/></p>

The components of the above structure are:

1. A ***header file*** is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files
    - Some of C Header files :
        - stdlib.h : Defines numeric conversion functions, pseudo-random network generator, memory allocation
        - stdio.h : Defines core input and output functions
        - string.h : Defines string handling functions
        - math.h : Defines common mathematical functions
    - Syntax to include a header file in C :
        - #include

2. ***Main Method Declaration*** : The next part of a C program is to declare the main() function
    - Syntax to Declare main method :
        - int main()<br>{ }

3. ***Variable Declaration*** : It refers to the variables that are to be used in the function and must be declared before any operation in the function
    - Example :
        - int main(){<br>
            int a;<br>
            a = 10;<br>
            .<br>
            .

4. ***Body*** : Body of a function in C program, refers to the operations that are performed in the functions. It can be anything like manipulations, searching, sorting, printing, etc
    - Example : 
        - int main(){<br>
            int a;<br>
            a = 10;<br>
            **printf("%d",a);**<br>
            .<br>
            .

5. ***Return Statement*** : The return statement refers to the returning of the values from a function
    - Example : 
        - **int** main(){<br>
            int a;<br>
            a = 10;<br>
            **return a;**<br>
        }
        - return value depends on the return type of the function
        - **no return statement** in case of **void** return type  