#include "main.h"

void initializeStack(Stack *s)
{
    s->top = -1;
    s->size = 0;
    s->array = NULL;
}

int full (Stack *s) 
{
if (s-> top == s-> size - 1)
return (1) ;
else
return (0) ;
}

int isEmpty (Stack *s) 
{
if (s-> top == -1)
return (1) ;
else
return (0) ;
}

void push (Stack *s, int value)
{
if( !full (s) )
{
s-> top++ ;
s-> array [s-> top] = value;
}
}

int pop ( Stack *s ) 
{
if ( !isEmpty(s) )
{
value = s->array [s->top] ;
s-> top-- ;
return (value) ;
}
return (-1) ;
}

int main() {
    Stack stack;
    initializeStack(&stack);

    printf("Pushing elements onto the stack:\n");
    for (int i = 1; i <= 5; ++i) {
        printf("Pushing %d\n", i);
        push(&stack, i);
    }

    printf("\nPopping elements from the stack:\n");
    while (!isEmpty(&stack)) {
        printf("Popping %d\n", pop(&stack));
    }

    if (isEmpty(&stack)) {
        printf("\nThe stack is now empty.\n");
    } else {
        printf("\nThe stack is not empty.\n");
    }

    return 0;
}
