//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    int data;
    struct node *nextPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;


void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
    new_node->data=x; /*fill in data info*/
    new_node->nextPtr=NULL;
    if((*head)==NULL){
      *head=new_node;
    }
    else{//ต่อแถว
      (*tail)->nextPtr=new_node;//เชื่อม
    }
    *tail=new_node;
 }
}


int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
    int value= t->data;
    /* Finish dequeue*/
    //เคสปกติ
    *head =t->nextPtr;
    
    //Node สุดท้าย
    if((*head)==(*tail)){
      *tail=NULL;
    }
    free(t);
    return value;
   }
   printf("Empty queue\n");
   return 0;
}



#endif
