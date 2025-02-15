#include <stdio.h>
#include <stdlib.h>

struct stack{
    int capacity;
    int *arr;
    int height;
};


typedef struct stack stack;

stack *stack_alloc(){

    stack *p = malloc(sizeof(stack));
    
    // hej Benjamin, p->member er det samme som (*p).member når p er en pointer til en struct.

    p->capacity = 2;
    p->arr = malloc(sizeof(int)*2);
    p->height = 0;

    return p;
}


int stack_height(stack *s){
    int height = (*s).height;
    return height;
}

int stack_capacity(stack *s){
    int capacity = (*s).capacity;
    return capacity;
}

void stack_print(stack *s){
    
    //har også ændret til -> her
    for (int i = 0;  i < s->capacity; i++){
        if (i < s->height)
        {
            printf("array = %d ", s->arr[i]);
        }
        else
        {
            printf(" . ");
        }
        
        
    }
}

int main(void){

    stack *stack1 = stack_alloc();

    stack_print(stack1);



}