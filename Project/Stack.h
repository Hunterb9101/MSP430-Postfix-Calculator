/*
 * Stack.h
 *
 *  Created on: Dec 2, 2019
 *      Author: cfarrar
 */

#ifndef STACK_H_
#define STACK_H_



struct Stack{
    int stackLen;
    int stack[12];
    int back;
};

typedef struct Stack Stack;

Stack _Stack();
int isOperator(char c);
int isEmpty(Stack* s);
int push(Stack* s, double d);
int pop(Stack* s);
double peek(Stack* s);

#endif /* STACK_H_ */
