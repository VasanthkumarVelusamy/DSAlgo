//This is the boiler plate program for creating a list.

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*head=NULL, *temp=NULL;

void CreateList();
struct Node *CreateNode();
void Display();
void SwapNodes();


int main() {
    CreateList();
    Display();
    SwapNodes();
    Display();
}

void CreateList() {
    int count=1, numberOfItems;
    struct Node* node;
    printf("Enter the number of items to be added: ");
    scanf("%d",&numberOfItems);
    printf("\nEnter the data\n");
    while (count<=numberOfItems) {
        count++;
        node = CreateNode();
        if (head == NULL) {
            head = temp = node;
        }
        else {
            temp->next = node;
            temp=node;
        }
    }
}

struct Node *CreateNode() {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->next= NULL;
    scanf("%d",&node->data);
    return node;
}

void Display() {
    struct Node *temp=head;
    printf("\n");
    while (temp) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void SwapNodes() {
    int data1, data2;
    printf("\nEnter 2 items to swap: ");
    scanf("%d %d", &data1, &data2);
    
    struct Node *prevX = NULL, *currX=head;
    while (currX && currX->data != data1) {
        prevX = currX;
        currX=currX->next;
    }
    
    struct Node *prevY = NULL, *currY=head;
    while (currY && currY->data != data2) {
        prevY = currY;
        currY=currY->next;
    }
    
    printf("\ncurrX is: %d, currY is: %d", currX->data,currY->data);
    
    if (prevX ==NULL) {
        head = currY;
    }
    else {
        prevX->next=currY;
    }
    
    if (prevY ==NULL) {
        head = currX;
    }
    else {
        prevY->next=currX;
    }
    
    temp = currX->next;
    currX->next = currY->next;
    currY->next = temp;
    
    
}






