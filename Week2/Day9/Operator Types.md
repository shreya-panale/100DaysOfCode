<p align="center"><img src="https://www.geeksforgeeks.org/wp-content/uploads/Operators-In-C.png" width="500"></img></p>

## 1. Arithmetic Operators :
### Binary Operators :
- **Addition** : The + operator adds two operands. For example, x+y.
- **Subtraction** : The - operator subtracts two operands. For example, x-y.
- **Multiplication** : The * operator multiplies two operands. For example, x*y.
- **Division** : The / operator divides the first operand by the second. For example, x/y.
- **Modulus** : The % operator returns the remainder when first operand is divided by the second. For example, x%y.

### Unary Operators :
- **Increment** : The ++ operator is used to increment the value of an integer
    - pre-increment : ++y => instant
    - post-increment : y++ => value stored after the execution of current statement
- **Decrement** : The ++ operator is used to decrement the value of an integer
    - pre-decrement : --y => instant
    - post-decrement : y-- => value stored after the execution of current statement

## 2. Relational Operators :
- **Equal to** : Represented as ==, returns true if x and y are equal, else returns false; x==y
- **Not Equal to** : Represented as !=, returns true if x and y are not equal, else returns false; x!=y
- **Greater than** : Represented as >, returns true if x is greater than y, else returns false; x>y
- **Less than** : Represented as <, returns true if x is lesser than y, else returns false; x<y
- **Greater than or equal to** : Represented as >=, returns true if x is greater than or equal to y, else returns false; x>=y
- **Lesser than or equal to** : Represented as <=, returns true if x is lesser than or equal to y, else returns false; x<=y

## 3. Logical Operators :

- Logical **AND** : Represented as &&, returns true if x and y both are true, else returns false; x && y
- Logical **OR** : Represented as ||, returns true if one of x or y or both are true, else returns false; x || y
- Logical **NOT** : Represented as !, returns true if x is false, else returns true; !x

## 4. Bitwise Operators :

- Bitwise **AND** : Represented as &, takes two numbers as operands and does AND on every bit of two numbers
- Bitwise **OR** : Represented as |, takes two numbers as operands and does OR on every bit of two numbers
- Bitwise **XOR** : Represented as ^, takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different
- Bitwise **left shift** : Represented as << , takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift
- Bitwise **right shift** : Represented as >>, takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift
- Bitwise **NOT** : Represented as ~, takes one number and inverts all bits of it