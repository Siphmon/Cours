#include <stdio.h>
#include <stdlib.h>

/* @requires
    assigns
    ensure
*/

struct stack {
    int *content;
    int top;
    int size; //size of content
};
typedef struct stack stack;


void init_stack(stack *ps){
    ps->size=2;
    ps->content=malloc(ps->size *sizeof(int));
    ps->top=-1;
};


int is_empty_stack(stack s){
    return ( s.top < 0 );
};


//@requires ps is a valid address and ps->top <= new_size
void resize(stack *ps,int new_size){
    printf("resizing from %d to %d",ps->size,new_size);
    int *new_content = malloc(new_size*sizeof(int));
    for (int i=0; i <= ps->top ; i++)
        new_content[i]=ps->content[i];
    
    free(ps->content); //libere la memoire de l'ancien tableau (sinon fuite de memoire)
    ps->content = new_content;
    ps->size = new_size;

}


void push(int e, stack *ps){
    if (ps->top >= ps->size -1) resize(ps,ps->size *2);
    ps->top+=1;
    ps->content[ps->top]= e;
}


int pop(stack *ps){
    if (ps->top < ps->size /3) resize(ps,ps->size /2);
    int r = ps->content[ps->top];
    ps->top-=1;
    return r;
}

/*
void print_binary(int n){

}
*/

int main(){
    return 0;
}

