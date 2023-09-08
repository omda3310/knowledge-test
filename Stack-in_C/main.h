#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>

int value;

typedef struct Stack
    {
        int* array;
        int size;
        int top;

    }Stack;


void initializeStack(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);
int isEmpty(Stack *s);
int full (Stack *s);
#endif
