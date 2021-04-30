## Enumeration (or enum) : 
- It is a user defined data type in C
- Used to **assign names** to integral constants

<p align="center"><img src ="https://www.geeksforgeeks.org/wp-content/uploads/Enum-In-C.png"></img></p>

- Example :

        enum flag{constant1, constant2, constant3, ....... };
        enum flag flagX;
        flagX = constant2;

    - By **default**, the values of the constants are as follows : 
        - constant1 = 0, constant2 = 1, constant3 = 2 and so on
    - flagX = 1

- Initilaization of values:
- ***i.*** Two enum names can have **same value**

        enum State {Working = 1, Failed = 0, Freezed = 0};

- ***ii.*** We can assign values to some name in any order. All **unassigned** names get value as value of **previous name plus one**

        enum day {sunday = 1, monday, tuesday = 5, wednesday, thursday = 10, friday, saturday};

    - value of monday is 2, wednesday is 6 and so on

- ***iii.*** All enum constants must be **unique** in their **scope**

        enum state  {working, failed};
        enum result {failed, passed};
        
        int main()  { return 0; }
    
- Output :

        Compile Error: 'failed' has a previous declaration as 'state failed'

## Enum vs Macro

Macro :

    #define Working 0
    #define Failed 1
    #define Freezed 2

**Advantages** of using enum over macro when many related named constants have integral values.
- Enums follow scope rules
- Enum variables are automatically assigned values. Following is simpler

        enum state {Working, Failed, Freezed};
