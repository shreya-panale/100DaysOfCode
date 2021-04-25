A ***token*** is the smallest element of a program that is meaningful to the compiler

Tokens can be classified as follows : 
1. ***Keywords*** : pre-defined or reserved words in a programming language
    - C language supports *32 keywords* which are given below : <br>
    <pre>     auto         double      int        struct        break        else        long       switch
        case         enum        register   typedef       char         extern      return     union
        const        float       short      unsigned      continue     for         signed     void
        default      goto        sizeof     volatile      do           if          static     while</pre>

2. ***Identifiers*** : user-defined names of variables, functions and arrays
    - Must be unique
    - Keywords cannot be used as Identifiers
    - They start with eitehr a letter or an underscore(_)
    - consitsts of digits, letters and underscores
    - Must not contain white space

3. ***Constants*** : Like variable but value cannot be modified once they are defined
    - Syntax :
        - const data_type variable_name; (or) const data_type *variable_name; 

4. ***Strings*** : Strings are nothing but an array of characters ended with a null character ('\0')
    - null character indicates the end of string

5. ***Special Symbols*** :
    - Brackets[] : Used as array element reference. These indicate single and multidimensional subscripts
    - Parentheses() : Indicate function calls and function parameters
    - Braces{} : These mark the start and end of a block of code containing more than one executable statement
    - Comma (, ) : Used to separate more than one statements like for separating parameters in function calls
    - Semicolon(;) : Statement terminator, it indicates the end of one logical entity. That’s why each individual statement must be ended with a semicolon
    - Asterisk (*) : Used to create a pointer variable
    - Pre-processor (#) : The preprocessor is a macro processor that is used automatically by the compiler to transform your program before actual compilation

6. ***Operators*** : Operators are symbols that trigger an action when applied to C variables and other objects
    - The data items on which operators act upon are called *operands*
    - Depending on the number of operands that an operator can act upon, operators can be classified as follows: 
        - **Unary Operators** : Require only a single operand to act upon
            - Example increment(num++) and decrement(num--)
        - **Binary Operators** : Require two operands to act upon
            - Binary operators are classified into : 
                - Arithmetic operators
                - Relational Operators
                - Logical Operators
                - Assignment Operators
                - Conditional Operators
                - Bitwise Operators