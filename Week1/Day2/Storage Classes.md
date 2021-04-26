<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Storage-Classes-In-C.png" alt="drawing" width="300"/></p>

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

3. ***static*** : Static variables have a property of **preserving their value** even after they are **out of their scope!!**
    - Initialized only once
    - live till the program terminates
    - Scope is local to function they were defined in
    - Global static variable can be accessed anywhere

4. ***register*** : same functionality as ***auto*** but compiler stores these variables in registers if available
    - variables that are accessed frequently are stored using this storage class
    - **NOTE** : Cannot obtain address of a register variable using pointers