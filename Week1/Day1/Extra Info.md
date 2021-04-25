1. keyword **int** 
    - is used to define any positive or negative integer
    - Whenever a number is being assigned to an ‘int’ type variable, it is first converted to its binary representation (that is in 0’s and 1’s) then it is kept in memory at specific location
        - **Signed Integers** : 1 sign bit + 31 data bits
        - **Unsigned Integers** :  Only positive numbers can be stored

2. Difference between "int main()" and "int main(void)"
    - If a function signature doesn’t specify any argument, it means that the function can be called with any number of parameters or without any parameters
    - Example<br>
        #include <stdio.h><br>
        int main()<br>
        {<br>
            static int i = 5;<br>
            if (--i){<br>
                printf("%d ", i);<br>
                main(10);<br>
            }<br>
        }<br>
    - Output : 4 3 2 1
    - If it was int main(***void***) : It will throw an error saying => too many arguments to function 'main'

3. Program Error Signals : ***Error signals*** generally causes termination of the program and a core dump file is created named core, which stores the state of the process at the moment of termination
    - Types of Error Signals
        1. **SIGFPE** : some arithmetic error that occurred like division by zero
        2. **SIGILL** : illegal instruction
            - When a garbage instruction or instruction which a program has no privilege to execute, is executed then this signal is generated
            - C generally doesn't produce illegal instructions
            - also generated when stack overflow occurs
        3. **SIGSEGV** : abbreviation for "segmentation violation"
            - when process tries to access memory location not allocated to it, like de-referencing a wild pointer which leads to "segmentation fault"
        4. **SIGBUS** : abbreviation for "Bus error"
            - when an invalid memory is accessed
            - In SIGSEGV, the memory location referenced is valid but in case of SIGBUS, memory referenced does not exist i.e de-referencing a memory location out of memory space
        5. **SIGABRT** : If an error itself is detected by the program then this signal is generated using call to abort()
        6. **SIGSYS** : This signal is sent to process when an invalid argument is passed to a system call.
        7. **SIGTRAP** : This signal is send to process when an exception is occurred
            - This is requested by the debugger to get informed. For example, if a variable changes its value then this will trigger it
