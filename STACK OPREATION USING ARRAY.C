//push ,pop, isEmpty, isFull, operation in stack using an array

#include<stdio.h>
#include<stdlib.h>


struct stack{
 int size;
 int top;
 int *arr;
};


int isEmpty(struct stack *ptr)

{
    if (ptr->top == -1){
        return 1;
    }
    else {
        return 0;
        
    }
}

int isFull(struct stack *ptr){
    if (ptr->top == ptr->size-1){
        return 1;
        
    }
    return 0;
}

void push(struct stack*ptr, int val){
    if(isFull(ptr)){
        printf("stack overflow! cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

 int  pop(struct stack*ptr){
     if(isEmpty(ptr)){
        printf("stack Underflow! cannot pop from  to the stack\n");
         return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
        
    }
 }
 int main(){
    struct stack*sp = (struct stack*)malloc(sizeof(struct stack));
    
    
    sp->size =4;
    sp->top = -1;
    sp->arr =(int*)malloc(sp->size*sizeof(int));
    
      printf("stack has been create succesfully\n");
      
      printf("before pushing , Full:%d\n", isFull(sp));
      printf("before pushing , Empty:%d\n", isEmpty(sp));
      push(sp , 56);
      push(sp, 20);
      push(sp , 30);
      push(sp , 10);
      push(sp ,22);
      printf("after pushing , Full: %d\n", isFull(sp));
      printf("after pushing , Empty:%d\n", isEmpty(sp));
      
      printf("popped %d from the stack\n", pop (sp));
    return 0;

}
output
stack has been create succesfully
before pushing , Full:0
before pushing , Empty:1
stack overflow! cannot push 22 to the stack
after pushing , Full: 1
after pushing , Empty:0
popped 10 from the stack