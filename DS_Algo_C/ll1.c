//This program is to create a linkedlist.
//This while creating, inserts node in the head.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

struct Node *CreateList();
void DisplayList(struct Node *head);

int main(){
    int option = 1;
    while (option == 1) {
        head = CreateList();
        printf("Press 1 to continue: ");
        scanf("%d",&option);
    }
    DisplayList(head);
}

struct Node *CreateList(){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->next = NULL;
    printf("\nEnter the data: ");
    scanf("%d",&node->data);
    
    if (head==NULL){
        head = node;
    }
    else {
        node->next = head;
        head=node;
    }
    return head;
}

void DisplayList(struct Node *head) {
    while (head) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
