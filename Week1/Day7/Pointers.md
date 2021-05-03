Pointers store **address** of variables or a memory location
- **Syntax** :
    
            datatype *var_name; 

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/How-Pointer-Works-In-C.png" width="500"></img></p>

## 1. Using a Pointer :
- unary operator & : returns the **address** of that variable
- unary operator * :
    - To **declare** a pointer variable: There must be a * before its name
    - To **access** the value stored in the address : returns the value of the variable located at the address specified by its operand. This is also called **Dereferencing**

- **Example** :

        #include <stdio.h>

        int main()
        {
            int Var = 10;

            // A pointer variable that holds address of var.
            int *ptr = &Var;

            //Dereferencing
            printf("Value of Var = %d\n", *ptr);

            //ptr holds address of var
            printf("Value of ptr = %p\n", ptr);
            printf("Address of Var = %p\n", ptr);

            *ptr = 20; //changes the value of var

            printf("After doing *ptr = 20, Var is %d\n", Var);

            return 0;
        }

- **Output** :

        Value of Var = 10
        Value of ptr = 0x7fff0214c4ac
        Address of Var = 0x7fff0214c4ac
        After doing *ptr = 20, Var is 20

## 2. Pointer Expressions and Arithmetic :
- Pointer arithmetic is meaningless unless performed on an array 
        
	- increment ( ++ )
    - decrement ( — )
    - an integer may be added to a pointer ( + or += )
	- an integer may be subtracted from a pointer ( – or -= )

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/Untitled-presentation-31.png" width="500"></img></p>

## 3. Void Ponter :
Void pointer is a specific pointer type – void *
- a pointer that points to some data location in storage, which doesn’t have any specific type 
- void pointers **cannot** be **dereferenced**. It can however be done using typecasting the void pointer
- Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size

## 4. NULL Pointer :
NULL Pointer is a pointer which is pointing to nothing. In case, if we don’t have address to be assigned to a pointer, then we can simply use NULL
- **NULL vs Uninitialized pointer** : An uninitialized pointer stores an undefined value. A null pointer stores a defined value, but one that is defined by the environment to not be a valid address for any member or object.
- **NULL vs Void Pointer** : Null pointer is a value, while void pointer is a type

## 5. Dangling Ponter :
A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer

They are created by/when :
1. De-allocation of memory
2. Function Call
3. Variable goes out of scope

## 6. Pointer to an Array :

	#include<stdio.h>

	int main()
	{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *ptr = arr;

	printf("%d\n", ptr[0]);
	return 0;
	}
**Output** : 1

## 7. Double Pointer (Pointer to Pointer) :

**Syntax** : 

    datatype **var_name;

<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Double-Pointer-in-C.png" width="500"></img></p>

    