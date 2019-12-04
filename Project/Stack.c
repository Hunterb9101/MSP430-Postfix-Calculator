
#include <msp430.h>
#include "Stack.h"
/**
 * main.c
 */
//typedef struct Stack Stack;


Stack _Stack() {
    Stack s;
    s.stackLen = 10;
    s.back = -1;
    return s;
}



int isOperator(char c){
    char ops[] = {'+','-','*','/'};
    unsigned int i = 0;
    for(i=0; i<4; i++){
        if(ops[i] == c)
            return 1;
    }
    return 0;
}

int isEmpty(Stack* s){
    return s->back == -1;
}



/*
 * Push an element to the stack
 * Returns 1 if successful, 0 if failed
 */
int push(Stack* s, double d){
    // Make sure that memory isn't getting overwritten
    // by going over the length of the stack
    if(s->back+1 == s->stackLen){
        return 0;
    }
    else{
        s->back++;
        s->stack[s->back] = d;
        return 1;
    }

}

/*
 * Pop an element from the stack
 * Returns 1 if successful, 0 if failed
 */
int pop(Stack* s){
    if(s->back == -1){
        return 0;
    }
    else{
        s->back--;
        return 1;
    }
}

/*
 * Return the element at the top of the stack
 */
double peek(Stack* s){
    return s->stack[s->back];
}

