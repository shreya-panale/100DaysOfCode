# Dynamic Memory Allocation

## 1. "malloc" or "memory allocation"
- It is used to dynamically allocate a single large block of memory with the specified size
- It returns a pointer of type **void** which can be cast into a pointer of any form

        ptr = (cast-type*) malloc(byte-size)

- It initializes each block with default **garbage** value
- If space is insufficient, allocation **fails** and returns a **NULL** pointer

<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Malloc-function-in-c.png" width="500"></img></p>

## 2. "calloc" or "contiguous allocation"
- It is used to dynamically allocate the specified number of blocks of memory of the specified type
- It initializes each block with a default value **‘0’**

        ptr = (cast-type*)calloc(n, element-size);

- If space is insufficient, allocation **fails** and returns a **NULL** pointer.

<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/calloc-function-in-c.png" width="500"></img></p>


## 3. free()
- It is used to dynamically de-allocate the memory
- It helps to reduce wastage of memory by freeing it

        free(ptr);

<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Free-function-in-c.png" width="500"></img></p>

### How does free() know size of memory to e de-allocated?
- When memory allocation is done, the actual heap space allocated is one word larger than the requested memory
- The extra word is used to store the size of the allocation and is later used by free( )

### With **realloc**
- If "size" is zero, then call to realloc is equivalent to "free(ptr)"

        realloc(ptr, 0);

## 4. "realloc" or "re-allocation"
- It  is used to dynamically change the memory allocation of a previously allocated memory
- re-allocation of memory maintains the already present value and **new blocks** will be initialized with default **garbage** value

        ptr = realloc(ptr, newSize);
- If space is insufficient, allocation fails and returns a NULL pointer.

<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/realloc-function-in-c.png" width="500"></img></p>

## Difference Between malloc() and calloc() :
***i. Initialization :***
- **malloc()** allocates memory block of given size (in bytes) and returns a pointer to the beginning of the block
    - malloc() **doesn’t initialize** the allocated memory
    -  If we try to access the content of memory block(before initializing) then we’ll get **segmentation fault** error(or maybe **garbage** values)

- ***calloc()*** allocates the memory and also ***initializes*** the allocated memory block to **zero**
    - If we try to access the content of these blocks then we’ll get 0

***ii. Number of arguments :***
Unlike malloc(), calloc() takes two arguments:
1) Number of blocks to be allocated.
2) Size of each block.

***iii. Return Value :***
- After successful allocation in malloc() and calloc(), a pointer to the block of memory is returned 
    - otherwise **NULL** value is returned which indicates the **failure** of allocation.