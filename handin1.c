#include <stdio.h>

int main(void){

    struct stack{
        int capacity;
        int *arr;
        int height;
    };
    
    //struct stack stack1 = {.arr = {1,2}};

    typedef struct stack stack;
    
    stack *stack_alloc(void){

        stack *p = malloc(sizeof(stack));
        

        *p = stack stack2 = {
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
            st.arr[i]
            
        }
    }



}