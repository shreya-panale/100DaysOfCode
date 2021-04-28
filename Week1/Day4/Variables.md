A ***variable*** in simple terms is a storage place which has some memory allocated to it

- Variable Declaration :

        type variable1_name, variable2_name, variable3_name;

## 1. Rules for defining variables :
- A variable can have alphabets, digits, and underscore.
- A variable name can start with the alphabet, and underscore only. It can’t start with a digit.
- No whitespace is allowed within the variable name.
- A variable name must not be any reserved word or keyword, e.g. int, goto , etc.

## 2. Types of Variables in C : 
- ***i. Local*** Variable : declared and used inside the function or block
    - scope is limited to function or block
- ***ii. Global*** Variable : declared outside the function or block
    - declared at the starting of program
    - It is available to all the functions
- ***iii. Static*** Variable : A variable that retains its value between multiple function calls
    - It is declared with the static keyword

## 3. Redeclaration of global variable :

    // Program 1
    int main()
    {
        int x;
        int x = 5;
        printf("%d", x);
        return 0;
    }

**Output**: redeclaration of ‘x’ with no linkage

- C allows a global variable to be declared again when **first declaration doesn’t initialize** the variable

        // Program 2
        // int x = 2;   line 1
        // int x = 5;   line 2
        // Since x is initialized in line1, line2 will throw an error

        int x;          line3
        int x = 5;      line4
        // Since x is only declared and not initialized in line3, line4 doesn't throw and error

        int main()
        {
        printf("%d", x);
        return 0; 
        }

**Output** : 5

## 4. Declare variable as constant :
- ***i. The const keyword***
    - The constant variables can be initialized once only
    - The default value of constant variables are zero

            const int a;    //value of a is 0 and cannot be changed
            const int b = 10;

- ***ii. The #define preprocessor directive***
    - it declares an alias for any value

            #define num 25

## 5. Why variable name does not start with numbers in C?
- The compiler has 7 phases
- Backtracking is avoided in the lexical analysis phase while compiling the piece of code
    - The variable like Apple;, the compiler will know it an identifier right away when it meets the letter ‘A’ character in the lexical analysis phase
    - However, a variable like 123apple; , compiler won’t be able to decide if its a number or identifier until it hits ‘a’ and it needs backtracking to go in the lexical analysis phase to identify that it is a variable