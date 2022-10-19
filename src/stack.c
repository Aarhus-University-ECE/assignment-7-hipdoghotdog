#include "stack.h"

void initialize(stack* s){
  //implement initialize here
  s->head = NULL;
}

void push(int x, stack* s){
    //implement push here

    //create new node
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = x;

    //make the new node points to the head node
    newNode->next = s->head;

    //make the new node as head node
    //so that head will always point the last inserted data
    s->head = newNode;
    

}

int pop(stack* s){
    // implement pop here
    assert(s->head != NULL);
    struct node *temp;
    int h = s->head->data;
    if(s->head == NULL)
        printf("Stack is Empty\n");
    else
    {

        //backup the head node
        temp = s->head;

        //make the head node points to the next node.
        //logically removing the node
        s->head = temp->next;

        //free the poped element's memory
        free(temp);
        
    }

  return h;
}

bool empty(stack* s)
{
  //implement empty here
  if(s->head == -1)
  return true;
  else
  return false;
}

bool full(stack* s) {
    //implement full here
    //How can the stack be full if it can be expanded?
  return false;
}
