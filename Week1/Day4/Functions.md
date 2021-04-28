A **function** is a set of statements that take inputs, do some specific computation and produces output

    return_type function_name([ arg1_type arg1_name, ... ]) { code }

- Every C program has a function called **main()** that is called by **operating system** when a user runs the program
    - It has the return type of **int**
    - Returning 0 signals that there were no problems
- Every function has a **return type**
    - If a function doesn’t return any value, then void is used as return type
    - Even if the return type is void, a return statement can be used as a function terminator

            void function name(int a)
            {
                ....... //Function Body
                return; //Function execution would get terminated
                .......
            }			

-  Functions can return any type except arrays and functions
    - solved by returning **pointer** to array or function
- **Empty parameter** list means that the parameter list is not specified and function can be called with **any parameters**
    - To declare a function that can only be called without any parameter, we should use **"void fun(void)"** instead of fun()
- If a function is called before its declaration then the C compiler automatically assumes the declaration of that function in the following way:
        
        int function name();

    - If the **return type** of that function is **different** than int ,compiler would show an **error**

## 1. Why do we need functions?
- Functions help us in **reducing code redundancy**
    - If functionality is performed at multiple places in software, then rather than writing the same code, again and again, we create a function and call it everywhere
    - This also helps in **maintenance** as we have to change at one place if we make future changes to the functionality
- Functions make code **modular**
- Functions provide **abstraction**

## 2. Function Declaration

<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Function-Prototype-in-c.png" alt="drawing" width="500"/></p>

- A function declaration tells the compiler about the **number of parameters** function takes, **data-types** of parameters and **return type** of function 
- Putting parameter names in function declaration is optional in the function declaration, but it is necessary to put them in the definition

## 3. Parameter Passing to functions
- The parameters **passed** to function are called **actual** parameters
- The parameters **received** by function are called **formal** parameters

    - ***i. Pass by Value*** : In this method, values of actual parameters are **copied** to function’s formal parameters
        - The two types of parameters are stored in **different** memory locations
        - So any changes made inside functions are **not reflected** in actual parameters of caller
        - Parameters are always passed by value in C


    - ***ii. Pass by Reference*** : Both actual and formal parameters refer to **same locations**
        - so any changes made inside the function are actually **reflected** in actual parameters of caller
        - we can use pointers to get the effect of pass by reference

                # include <stdio.h>
                void fun(int *ptr)
                {
                    *ptr = 30;
                }
                
                int main()
                {
                    int x = 20;
                    fun(&x);
                    printf("x = %d", x);
                    return 0;
                }

                Output => x = 30

## 4. Types of Main Function 
- **Without parameters** :

        int main()
        {
            ...
            return 0;
        }

- **With parameters** :

        int main(int argc, char * const argv[])
        {
            ...
            return 0;
        }

    - This allows input from the **command line**
    - It saves every group of characters (separated by a space) after the program name as elements in an **array** named **argv**

## 5. What is the purpose of a function prototype?

- It tells the **return type** of the data that the function will return
- It tells the **number of arguments** passed to the function
- It tells the **data types** of the each of the passed arguments
- It also tells the **order** in which the arguments are passed to the function

- What if function prototype is not mentioned?
    - Up to C90 standard
        - C compilers assumed the return type of the omitted function prototype as **int**
        - This assumption at compiler side may lead to unspecified program behavior
    - C99
        - compilers can no longer assume return type as int
        - backward compatible : compilers throw the **warning** saying that the return type is assumed as int and go ahead with compilation

## 6. Static functions in C
- The "static" keyword before a function name makes it static
- Access to static functions is restricted to the file where they are declared

## 7. Callbacks in C
- If a reference of a function is passed to another function as an argument to call it, then it will be called as a Callback function

        #include<stdio.h>
  
        void A()
        {
            printf("I am function A\n");
        }
        
        // callback function
        void B(void (*ptr)())
        {
            (*ptr) (); // callback to A
        }
        
        int main()
        {
            void (*ptr)() = &A;
            
            // calling function B and passing address of the function A as argument
            B(ptr);
        
        return 0;
        }
Output : I am function A