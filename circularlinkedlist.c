circular linked list



#include<stdio.h>
#include<stdlib.h>

 struct Node{
     int data;
     struct Node*next;
 };
 
 void linkedListTraversal(struct Node* head){
     struct Node*ptr = head;
     do{
         printf("element is %d\n", ptr->data);
         ptr = ptr->next;
     } while ( ptr!=head);
 }

int main(){
    
    struct Node*head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    
    
    //allocate memory for nodes in the linked list in heap
    head = ( struct Node*)malloc(sizeof(struct Node));
    second = ( struct Node*)malloc(sizeof(struct Node));
    third = ( struct Node*)malloc(sizeof(struct Node));
    fourth = ( struct Node*)malloc(sizeof(struct Node));
    
    //link first and second nodes
    head->data= 4;
    head->next = second;
    
    //link second and third nodes
    second->data=3;
    second->next= third;
    
    //link thoird and fourth nodes
    third->data = 6;
    third->next= fourth;
    
    //link fouth and last nodes
    fourth->data= 1;
    fourth->next=NULL;
    
    
    linkedListTraversal(head);
    return 0;

}