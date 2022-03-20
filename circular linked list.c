//circular linked list



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
 };
 
 struct Node * insertAtFirst(struct Node * head, int data){
     struct Node *ptr = ( struct Node*)malloc(sizeof(struct Node));
     ptr->data = data;
     
    struct Node * p =head->next;
    while ( p->next !=head){
        p=p->next;
    }
    
    // at this p point to the last node of this circular linked list 
    
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
   
    
 };

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
    fourth->next=head;
    printf( " Circular linked list before insertion\n");
    
    linkedListTraversal(head);
   
    head = insertAtFirst( head, 54);
    head = insertAtFirst( head, 58);
    printf("Circular linked list after insertion\n");
    linkedListTraversal(head);
    return 0;

}

output
 Circular linked list before insertion
element is 4
element is 3
element is 6
element is 1
Circular linked list after insertion
element is 58
element is 54
element is 4
element is 3
element is 6
element is 1