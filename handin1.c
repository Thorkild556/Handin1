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
    

    *p = stack stack1{
        .capacity = 2;
        .arr = malloc(sizeof(int)*2);
        .height = 0;
    };

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
    
    stack st = *s;

    for (int i = 0;  i < st.capacity, i++){
        if (i < st.height)
        {
            printf("array = %d ", st.arr[i]);
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