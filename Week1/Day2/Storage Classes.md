<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Storage-Classes-In-C.png" alt="drawing" width="500"/></p>

- Storage Classes are used to describe the features of a variable/function
- These features basically include the scope, visibility and life-time 
- which help us to trace the existence of a particular variable during the runtime of a program

- To specify the storage class for a variable, the following syntax is to be followed:

        storage_class var_data_type var_name; 

## 4 Storage Classes in C

1. ***auto*** : **default** storage class for all the variables declared inside a function or a block
    - Hence they are rarely used
    - Can be accessed outside the scope by using *pointers* 

2. ***extern*** : Tells us variable is defined elsewhere and not within that block
    - Basically a *global* variable, and it implies that we are not initializing a new variable but instead we are using/accessing the global variable only
    - The main purpose of using extern variables is that they can be accessed between **two different files** which are part of a large program
    - Used only during declarations and not definitions
    - variable initialization **must not** be done using extern
    - Example 1 : Compilation error because var is declared but not defined anywhere. Essentially, the var isn’t allocated any memory. And the program is trying to change the value to 10 of a variable that doesn’t exist at all

            extern int var;
            int main(void)
            {
             var = 10;
             return 0;
            }
    - Example 2 : Assuming that somefile.h contains the definition of var, this program will compile successfully
            
            #include "somefile.h"
            extern int var;
            int main(void)
            {
            var = 10;
            return 0;
            }
    - Example 3 : As an exception, when an extern variable is declared with initialization, it is taken as the definition of the variable as well
        
            extern int var = 0;
            int main(void)
            {
            var = 10;
            return 0;
            }
        - **Declared outside the function** as its a global variable, else it will throw error

3. ***static*** : Static variables have a property of **preserving their value** even after they are **out of their scope!!**
    - Initialized only once
    - live till the program terminates
    - Scope is local to function they were defined in
    - Global static variable can be accessed anywhere
    - can only be initialized using **constant literals**
        - example -> static int i = fun() will give compilation error

4. ***register*** : same functionality as ***auto*** but compiler stores these variables in registers if available
    - variables that are accessed frequently are stored using this storage class
    - **NOTE** : Cannot obtain address of a register variable using pointers

***Q. What are Volatile Variables?***

- Volatile keyword acts as a data type qualifier
- It tells the compiler to *not optimize* the variable during compilation