// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Stack type
struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

// Stack Operations
struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*)
           malloc(sizeof(struct Stack));

    if (!stack)
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int*) malloc(stack->capacity *
                                   sizeof(int));

    return stack;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}
char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}
char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}
void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}

//Back-end complete function Template for C

// A utility function to check if
// the given character is operand
int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z');
}

// A utility function to return
// precedence of a given operator
// Higher returned value means
// higher precedence
int Prec(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;

    case '*':
    case '/':
        return 2;

    case '^':
        return 3;
    }
    return -1;
}


// The main function that
// converts given infix expression
// to postfix expression.
char* infixToPostfix(char* exp)
{
    int i, k;

    // Create a stack of capacity
    // equal to expression size
    struct Stack* stack = createStack(strlen(exp));

    for (i = 0, k = -1; exp[i]; ++i)
    {

        // If the scanned character is
        // an operand, add it to output.
        if (isOperand(exp[i]))
            exp[++k] = exp[i];

        // If the scanned character is an
        // â€˜(â€˜, push it to the stack.
        else if (exp[i] == '(')
            push(stack, exp[i]);

        // If the scanned character is an â€˜)â€™,
        // pop and output from the stack
        // until an â€˜(â€˜ is encountered.
        else if (exp[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                exp[++k] = pop(stack);
                pop(stack);
        }
        else // an operator is encountered
        {
            while (!isEmpty(stack) &&
                 Prec(exp[i]) <= Prec(peek(stack)))
                exp[++k] = pop(stack);
            push(stack, exp[i]);
        }

    }

    // pop all the operators from the stack
    while (!isEmpty(stack))
        exp[++k] = pop(stack);

    exp[++k] = '\0';
    return exp;
}

// { Driver Code Starts.

int main() {

	int t;
	scanf("%d",&t);
    while(t--)
    {
        char *exp;
        scanf("%s",exp);
        int size=strlen(exp);
        int cnt=0,i=0;
        for(int i=0;i<size;i++)
        {
            if(exp[i]==')' || exp[i]=='(')
                cnt++;
        }
        exp=infixToPostfix(exp);
        while(i!=(size-cnt))
        {
            printf("%c",exp[i]);
            i++;
        }
        printf("\n");
    }
	return 0;
}
  // } Driver Code Ends
