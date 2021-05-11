- An array is a collection of items stored at **contiguous memory locations**
- In C language array has a **fixed size** meaning once the size is given to it, it cannot be changed i.e. you can’t shrink it neither can you expand it
<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/array-2.png" width="300"></img></p>

### Types of indexing in an array :
- 0 (zero-based indexing): The first element of the array is indexed by a subscript of 0
- 1 (one-based indexing): The first element of the array is indexed by the subscript of 1
- n (n-based indexing): The base index of an array can be freely chosen. Usually, programming languages allowing n-based indexing also allow negative index values, and other scalar data types like enumerations, or characters may be used as an array index

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/Array-In-C.png" width="300"></img></p>

## 1. Advantages :
- Arrays allow **random access** to elements. This makes accessing elements by position faster.
- Arrays have better **cache locality** that can make a pretty big difference in performance.
- Arrays represent **multiple data items** of the same type using a **single name**

## 2. Disadvantages :
- They are **homogeneous** : One array can hold elements of only one data type
- While declaring an array, passing size of an array is compulsory, and the **size** must be a **constant**. Thus, there is either **shortage** or **wastage of memory**
- Insertion and Deletion are **costly** due to shifting

## 3. Applications :
- Array stores data elements of the **same data type**
- Arrays can be used for **CPU scheduling**
- Used to Implement **other data structures** like Stacks, Queues, Heaps, Hash tables, etc

## 4. Basic Operations :
- **Traverse** : print all the array elements one by one.
- **Insertion** : Adds an element at the given index.
- **Deletion** : Deletes an element at the given index.
- **Search** : Searches an element using the given index or by the value.
- **Update** : Updates an element at the given index.