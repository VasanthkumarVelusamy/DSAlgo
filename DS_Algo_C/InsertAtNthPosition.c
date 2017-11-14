#include<stdio.h>
#include<stdlib.h>
struct Node {
  int data;
  struct Node *next;
} *head=NULL;

void InsertAtPosition(int data, int position){
  struct Node *temp=head, * newNode;
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  if (position == 1){
    newNode->next = head;
    head = newNode;
  }
  else{
    for (int i = 1; i < position-1; i++) {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
  }
}

void Print(){
  struct Node *temp = head;
  while (temp) {
    printf("%d\n", temp->data);
    temp = temp->next;

  }
}


int main(){
  int data, position;
scanf("%d %d",&data, &position);
InsertAtPosition(2,1);
InsertAtPosition(5,1);
InsertAtPosition(8,1);
InsertAtPosition(1,1);
InsertAtPosition(9,1);
InsertAtPosition(10,1);
printf("\nList before insertion\n" );
Print();
InsertAtPosition(data,position);
printf("\nList after insertion\n" );
Print();
}
