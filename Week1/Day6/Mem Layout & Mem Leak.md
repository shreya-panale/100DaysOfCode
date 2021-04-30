# Memory representation of a C program :
<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/memoryLayoutC.jpg" alt="drawing" width="300"/></p>

## 1. Text Segment :
- also known as a **code** segment
- contains **executable instructions**
- may be placed **below the heap or stack**
    - to prevent heaps and stack overflows from overwriting it
- It is **sharable** -> only one copy needs to be in memory
- Often **read only** -> prevents modifications

## 2. Initialized data segment :
- It is a *portion* of the **virtual address space** of a program
- contains the **global** and **static** variables that are initialized by the **programmer**
- **not read-only** -> Since values can be altered

## 3. Uninitialized data segment :
- also known as a **bss** segment -> **block started by symbol**
- Initialized by the kernel to arithmetic **0** 
- starts at the **end of the data segment**
- contains all global variables and static variables that are initialized to zero or do not have explicit initialization

## 4. Stack :
- **adjoined the heap area**and grows in the opposite direction
- when the stack pointer meets the heap pointer, free memory is exhausted
- contains the **program stack**
- The set of values pushed for one function call is termed a **"stack frame"**
    - Each time a recursive function calls itself, a new stack frame is used, so one set of variables doesn’t interfere with the variables from another instance of the function

## 5. Heap :
- begins at the **end of the BSS** segment and grows to larger addresses from there
- managed by malloc, realloc, and free
- shared by all shared libraries and dynamically loaded modules in a process

## What is Memory Leak? How can we avoid?
- Memory leak occurs when programmers create a memory in heap and forget to delete it
- To avoid memory leaks, memory allocated on heap should always be freed when no longer needed

        void f()
        {
            int *ptr = (int *) malloc(sizeof(int));
            /* Code */
            free(ptr);
            return;
        }
