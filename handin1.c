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
            printf("%d ", s->arr[i]);
        }
        else
        {
            printf(" . ");
        }
        
        
    }
}

int stack_push(struct stack *s, int x){
    if (s->height >= s->capacity){
        return -1;
    }

    else{
    s->arr[s->height] = x;
    s->height ++;
    return 0;
    }
}

int stack_pop(struct stack *s, int *dst){
    *dst = s->arr[s->height-1];
    s->height -= 1;
    return *dst;
}


int main(void){

    stack *stack1 = stack_alloc();

    stack_push(stack1, 1);
    stack_push(stack1, 3);
    int val;
    stack_pop(stack1, &val);

    stack_push(stack1, 2);

    stack_print(stack1);



}