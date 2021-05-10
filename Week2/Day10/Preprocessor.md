- A Preprocessor is a **system software** (a computer program that is designed to run on computer’s hardware and application programs)
- It performs preprocessing of the High Level Language(HLL)
- The preprocessor doesn’t know about the scope rules of C

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/Preprocessor.png" width="300"></img></p>

## Tasks of Preprocessor :
### 1. Removing comments :
- It removes all the comments as they are used only for humans to understand the code
- Command :

        gcc -E prog.c
- This file is saved with a '.i' extension (prog.i) which will be input to the compiler

### 2. File inclusion : 
- Including all the files from library that our program needs
- For example, #include will tell the preprocessor to include all the contents in the library file stdio.h
- NOTE :
    - If the filename is enclosed within **angle brackets**, the file is searched for in the standard compiler include paths
    - If the filename is enclosed within **double quotes**, the search path is expanded to include the current source directory

### 3. Macro expansion : 
- Macros can be called as small functions that are not as overhead to process
- For example, #define SI 1000
- Two types :
    - **Object-like** (no parameters)
        - #define
    - **function-like** (can take parameters)
        - #define ()
- **Multi-line** macro, each statement ends with a \

        #include <stdio.h> 
   
        #define MACRO(num, str)({\ 
            printf("%d", num);\ 
            printf(" is");\ 
            printf(" %s number", str);\ 
            printf("\n");\ 
           })

- **Deleting** a macro
    - #undef SI

## Q. Write a C macro PRINT(x) which prints x

-  compile error because the data type of x, which is taken as variable by the compiler, is unknown

        #define PRINT(x) (x)
        int main()
        {
        printf("%s",PRINT(x));
        return 0;
        }
- '#' directive **converts its argument** in a ***string*** ('*Stringizing Operator*')

        #define PRINT(x) (#x)
        int main()
        {
        printf("%s",PRINT(x));
        return 0;
        }

## Q. How to print a variable name in C?
- Using the **Stringizing Operator**
        
        #include <stdio.h>
        #define getName(var) #var

        int main()
        {
            int myVar;
            printf("%s", getName(myVar));
            return 0;
        }

## #pragma Directive
- This directive is a special purpose directive and is used to turn on or off some features
- #pragma **startup** and #pragma **exit**: specify the functions that are needed to run before program startup( before the control passes to main()) and just before program exit (just before the control returns from main())


        #include <stdio.h>

        void func1();
        void func2();

        #pragma startup func1
        #pragma exit func2

        // For GCC compilers, as they don't support pragma :
        // void __attribute__((constructor)) func1();
        // void __attribute__((destructor)) func2();

        void func1()
        {
            printf("Inside func1()\n");
        }

        void func2()
        {
            printf("Inside func2()\n");
        }

        int main()
        {
            void func1();
            void func2();
            printf("Inside main()\n");

            return 0;
        }

- Output : 

        Inside func1()
        Inside main()
        Inside func2()

- #pragma **warn** Directive: This directive is used to **hide the warning** message which are displayed during compilation. 
    - #pragma warn ***-rvl*** : This directive hides those warning which are raised when a function which is supposed to return a value does not returns a value.
    - #pragma warn ***-par*** : when a function does not uses the parameters passed to it.
    - #pragma warn ***-rch*** : when a code is unreachable(ex-code after return statement)