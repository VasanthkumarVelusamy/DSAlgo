#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
} *head = NULL;

void MakeList(int data){
  struct Node *temp = NULL;
  temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = head;
  head = temp;
}

void PrintList(){
  struct Node *temp = head;
  printf("\nThe List is \n");
  while (temp) {
    printf("%d\n",temp->data);
    temp = temp->next;
  }
}

int main(){
  int data,count;
  printf("Enter the number of elements to be added\n");
  scanf("%d", &count);
  while(count > 0){
    printf("Enter the number to insert the values to the List\n");
    scanf("%d",&data);
    MakeList(data);
    count--;
  }
  PrintList();
    return 0;
}
