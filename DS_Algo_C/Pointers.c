#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node *next;
}*head, *dummy;

int main(){
  // char A[]="Vas";
  // char sizeofemptychar[] = "a";
  int integerArray[3];
  //  = {1,2,3,4,5};
  // int len = strlen(A);
  // printf(1+"%d\n",sizeof(A));
  // printf("length is %d\n",len );
  // printf(5+"Good morning\n");
  // printf("%d\n",strlen(sizeofemptychar));
  // printf("%s\n", A);
  // printf("%lu\n",sizeof(A));
  // printf("%lu\n",sizeof(integerArray));
  printf("2nd element in the array by default is %d \n",integerArray[1]);

  head = (struct Node*)malloc(2);
  head->data = 5;
  head->next = NULL;

  dummy = (struct Node*)malloc(2);
  dummy->data = 6;
  dummy->next = head;

  printf("The value in the head is %d\n", head->data);
  printf("The value in the dummy is %d\n", dummy->data);

  return 0;
}
