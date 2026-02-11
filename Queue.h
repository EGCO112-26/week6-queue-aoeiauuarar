

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->data=x;
  new_node->nextPtr=NULL;
  if(q->size==0)q->headPtr=new_node;
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(q->size>0){
    int value= t->data;
    q->headPtr=t->nextPtr;
    
    q->size--;
    if(q->headPtr==q->tailPtr){
      q->tailPtr=NULL;
    }
    free(t);
    /*Finish dequeue */
    return value;
   }
   printf("Empty queue\n");
   return 0;
}

