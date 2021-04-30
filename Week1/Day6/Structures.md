## 1. What is a Structure : 
- A structure creates a data type that can be used to **group items** of possibly different types into a single type

<p align="center"><img src ="https://www.geeksforgeeks.org/wp-content/uploads/Structure-In-C.png" width="500"></img></p>

## 2. Declaring structure variables : 
- ***i.*** **with structure declaration** : 

        struct Point
        {
        int x, y;
        } p1;  // The variable p1 is declared with 'Point'

- ***ii.*** **separate declaration** :

        struct Point
        {
            int x, y;
        }; 
        
        int main()
        {
            struct Point p1;  // The variable p1 is declared like a normal variable
        }

## 3. struct member initializations : 
- **cannot** be initialized with declaration

        struct Point
        {
        int x = 0; // COMPILER ERROR: cannot initialize members here
        int y = 0; // COMPILER ERROR: cannot initialize members here
        };

    - when a datatype is declared, no memory is allocated for it. Memory is allocated only when variables are created
- can be initialized using curly braces '{}' : 

        int main()
        {
            struct Point p1 = {0, 1};
            // or
            struct Point p2;
            p2.x = 0; // '.' is used to access the members
            // Examples of initialization using designated initialization
            struct Point p3 = {.y = 0, .z = 1, .x = 2};
        }

## 4. Array of stuctures :

    // Create an array of structures
    struct Point arr[10];
    
    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

## 5. Structure Pointer :
- If we have a pointer to structure, members are accessed using arrow ( -> ) operator

        struct Point p1 = {1, 2};
        
        // p2 is a pointer to structure p1
        struct Point *p2 = &p1;
        
        // Accessing structure members using structure pointer
        printf("%d %d", p2->x, p2->y);

## 6. How to avoid the structure padding : 
- ***i.*** Using **#pragma pack(1)** directive :

        #include <stdio.h>  
        #pragma pack(1)  
        struct base  
        {  
            int a;  
            char b;  
            double c;  
        };  
        int main()  
        {  
            struct base var;
            // Displaying the size of the structure base  
            printf("size = %d", sizeof(var));  
            return 0;  
        }  
- **Output** : size = 13 //without pragma => size = 16, first 4 for int, next 4 for char due to padding and next 8 for double

- ***ii.*** Using **attribute** :

        struct base  
        {  
            int a;  
            char b;  
            double c;  
        }__attribute__((packed));
- **Output** : size = 13 

## 7. Limitations of Structures :
- Does not permit data hiding
    - Structure members can be accessed by any function, anywhere in the scope of the Structure.
- Does not permit functions inside Structure
- Cannot have static members inside their body
- Cannot have constructor inside Structures.
