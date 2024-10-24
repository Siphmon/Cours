#include <stdio.h>

/* @requires
    assigns
    ensure
*/

#define Stacksize 10

struct stack {
    int content[Stacksize];
    int top;
};
typedef struct stack stack;

void init_stack(stack *ps){
    ps->top=-1;
};

int is_empty_stack(stack s){
    return ( s.top < 0 );
};

void push(int e, stack *ps){
    if (ps->top >= Stacksize -1){ printf(stderr, "Stack full\n");return;};
    ps->top+=1;
    ps->content[ps->top]= e;
}

int pop(stack *ps){
    int r = ps->content[ps->top];
    ps->top-=1;
    return r;
}

/*
void print_binary(int n){
    stack s;
    init_stack(&s);
    while (n>0) {

    }
}*/



int main(){
    return 0;
}

