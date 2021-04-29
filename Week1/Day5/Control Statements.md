## 1. For VS While

- They will behave differently if there is a **continue** statement
- **for loop :**

        for(i = 0; i < 3; i++)
        {
            printf("loop ");
            continue;
        } 

        Output => loop loop loop
- **while loop :**

        int i =0;
        while(i < 3)
        {
            printf("loop"); /* printed infinite times */
            continue;
            i++; /*This statement is never executed*/
        } 

## 2. Switch Statement
- Switch case statements are a substitute for long if statements that compare a variable to several integral values
- control statement that allows a value to change control of execution
- **Syntax :**

        switch (n)
        {
            case 1: // code to be executed if n = 1;
                break;
            case 2: // code to be executed if n = 2;
                break;
            default: // code to be executed if n doesn't match any cases
        }

- ***i.*** The expression provided in the switch should result in a constant value otherwise it would not be valid
- ***ii.*** Duplicate case values are not allowed
- ***iii.*** The default statement is optional
- ***iv.*** The break statement is optional. If omitted, execution will continue on into the next case
- ***v.*** Nesting of switch statements are allowed but makes the code complex

### Using range in switch case
- ***NOTE*** - It is possible due to case range extension of the GNU C compiler and not standard C 
- You can specify a range of consecutive values in a single case label

        case low ... high:
        case low...high: //wrong, add spaces around the ellipses

- It can be used for ranges of ASCII character codes like this:

        case 'A' ... 'Z'://converts to ASCII values

## 3. while(1) vs while(0)
- while(1) - It is an infinite loop which will run till a break statement is issued explicitly

        while(1) or while(any non-zero integer)
        { 
            // loop runs infinitely
        }

- while(0) - The loop never executes!

## 4. goto statement
- It is a jump statement which is sometimes also referred to as unconditional jump statement
- **Syntax :** 

        Syntax1      |   Syntax2
        ----------------------------
        goto label;  |    label:  
        .            |    .
        .            |    .
        .            |    .
        label:       |    goto label;

- **Disadvantages** of using goto statement:
    - It makes the program logic very complex
    - Makes analyzing and verifying the correctness of programs (particularly those involving loops) very difficult.
    - Use break and continue statements instead

## 5. continue statement
- It forces to execute the next iteration of the loop
- **Syntax :** 

        continue ;

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/continue.png" alt="drawing" width="300"/></p>


## 6. break statement
- It terminates the loop
- **Syntax :** 

        break ;

<p align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/break.png" alt="drawing" width="300"/></p>
