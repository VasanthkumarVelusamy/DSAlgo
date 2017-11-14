//This is a biolerplate code for creating a linkedlist.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*head=NULL,*temp=NULL;

void CreateList();
struct Node *CreateNode();
void Display();

int main() {
    CreateList();
    Display();
}

void CreateList(){
    int count=1, numberOfItems;
    struct Node *node;
    printf("Enter the number of items needed: ");
    scanf("%d", &numberOfItems);
    printf("Enter the items: \n");
    while (count<=numberOfItems) {
        node = CreateNode();
        count++;
        if (head==NULL) {
            head = temp=node;
        }
        else{
            temp->next=node;
            temp=node;
        }
    }
}
struct Node *CreateNode(){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->next = NULL;
    scanf("%d",&node->data);
    return node;
}
void Display(){
    struct Node* temp = head;
    printf("\n");
    while (temp) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
