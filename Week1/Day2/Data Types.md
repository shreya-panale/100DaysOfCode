<p align="center"><img src="https://i.pinimg.com/originals/f8/b1/b4/f8b1b4707cd00bf208706eb38997f7c2.jpg" alt="drawing" width="500"/></p>

Following are the examples of some very common data types used in C:

- ***char*** : It stores a single character and requires a single byte of memory in almost all compilers.
- ***int*** : Used to store an integer.
- ***float*** : Used to store decimal numbers with single precision.
- ***double*** : It is used to store decimal numbers with double precision. 

## What is the size_t data type in C?

- size_t is an unsigned integral data type which is defined in various header files such as:
            
      <stddef.h>, <stdio.h>, <stdlib.h>, <string.h>, <time.h>, <wchar.h>

- It’s a type which is used to represent the size of objects in bytes and is therefore used as the return type by the sizeof operator
- It is guaranteed to be big enough to contain the size of the biggest object the host system can handle
    - if the compiler is **32 bit** then it is simply a typedef(i.e., alias) for **unsigned int**
    - if the compiler is **64 bit** then it would be a typedef for **unsigned long long**
- The size_t data type is never negative



## Type Conversion in C
1. **Implicit Type Conversion / Automatic**

    - Done by the **compiler** on its own, without any external trigger from the user.
    - Generally takes place when in an expression more than one data type is present. In such condition type conversion (type promotion) takes place to avoid loss of data
    - All the data types of the variables are upgraded to the data type of the variable with largest data type
    
          bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
    - It is possible for implicit conversions to lose information, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float)

2. **Explicit Type Conversion**

    - This process is also called **type casting** and it is **user defined**
    - Here the user can type cast the result to make it of a particular data type
    
          Syntax : (type) expression

## Integer Promotions in C
Some data types like char , short int take less number of bytes than int, these data types are automatically promoted to int or unsigned int when an operation is performed on them. 

For example no arithmetic calculation happens on smaller types like char, short and enum. They are first converted to int or unsigned int, and then arithmetic is done on them. 

If an int can represent all values of the original type, the value is converted to an int . Otherwise, it is converted to an unsigned int.

        example:
        #include <stdio.h> 
        int main()
        {
            char a = 30, b = 40, c = 10;
            char d = (a * b) / c;
            printf ("%d ", d); 
            return 0;
        }

At first look, the expression (a*b)/c seems to cause arithmetic overflow because signed characters can have values only from -128 to 127 (in most of the C compilers), and the value of subexpression ‘(a*b)’ is 1200 which is greater than 128. 

But integer promotion happens here in arithmetic done on char types and we get the appropriate result without any overflow.