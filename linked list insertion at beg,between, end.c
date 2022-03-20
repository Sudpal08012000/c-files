// linked list insertion at beginning , between , end

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

  void linkedListTraversal(struct Node * ptr)
  {
      while (ptr !=NULL)
      {
          printf("Element=%d\n" , ptr->data);
          ptr = ptr->next;
      }
  }
    // inert at beginning 
  struct Node* insertAtFirst(struct Node* head, int data){
      struct Node* ptr = ( struct Node* )malloc(sizeof(struct Node));
      ptr-> data = data;
      ptr->next = head;
      
      return ptr;
  }
  
  // insert at end
   struct Node* insertAtEnd(struct Node* head, int data ){
       struct Node* ptr = ( struct Node* )malloc(sizeof(struct Node));
        ptr->data = data;
        struct Node* p= head;
        
        while(p->next!=NULL){
            p=p->next;
        } 
        p->next =ptr;
        ptr->next = NULL;
        return head;
   }  
  
  
  
  
   // insert at between
   struct Node * insertAtIndex(struct Node* head,int data, int Index){
       struct Node * ptr = ( struct Node*)malloc(sizeof(struct Node));
       struct Node* p= head;
       int i=0;
       
       while ( i!= Index-1)
       
       {
           p=p->next;
           i++;
           
       }
       ptr->data= data;
       ptr->next = p->next;
       p->next = ptr;
       return head;
       
       
   }
   
    
   
   int main(){
       
       struct Node* head;
       struct Node* second;
       struct Node* third;
       
     //Allocate memory for nodes int he linked list in heap
     
     head= (struct Node* )malloc(sizeof(struct Node));
     second = ( struct Node*)malloc(sizeof (struct Node));
     third = (struct Node*)malloc(sizeof(struct Node));
     
     //link first and second nodes
     head->data = 7;
     head ->next = second;
     
     // link second and third nodes
     second-> data = 11;
     second -> next = third;
     
     //termintae the list at the third node 
     third->data =66;
     third -> next = NULL;
     
     printf("Linked list before insertion\n");
     linkedListTraversal(head);
    // head = insertAtFirst(head , 88);
    // head = insertAtIndex(head , 88, 2);
      head = insertAtEnd(head , 88);
      printf("\nLinked list after insertion\n");
      linkedListTraversal(head);
     
     
     return 0;
     
     
   }

output 
Linked list before insertion
Element=7
Element=11
Element=66

Linked list after insertion
Element=7
Element=11
Element=66
Element=88