#include<stdio.h>
#include<stdlib.h>

// define a stack using arrey and structure
#define stackMax 100
typedef struct {
    int top;
    int data[stackMax];
} stack ;

// push a data in the stack 
void push(stack *s, int item){
    if(s->top < stackMax){
        s->data[s->top] = item;
        s->top = s->top +1;
    }
    else{
        printf("Stack is full\n");
    }
}
// pop a data from the stack
int pop(stack *s){
    int item ;
    if (s->top == 0){
        printf("Stack ic empty\n");
        return 0;
    }
    else{
        s->top = s->top -1;
        item =  s->data[s->top];
    }
    return item ;
}

int main(){
    stack myStack;
    int item ;
    myStack.top = 0;

    push(&myStack, 3);
    push(&myStack, 4);

    item = pop(&myStack);
    printf("%d",item);

    return 0;
}

