//This program uses code in ll1.c(which inserts node in the head while creating) for creating linked list
//In addition to that, this program inserts node in the end.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

void CreateList();
void DisplayList(struct Node *head);
void InsertNodeAtEnd();

int main(){
    
    
    
    CreateList();
    DisplayList(head);
    InsertNodeAtEnd();
    DisplayList(head);
}

void CreateList(){
    int option = 1;
    while (option == 1) {
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
        printf("Press 1 to continue: ");
        scanf("%d",&option);
    }
}

void DisplayList(struct Node *head) {
    while (head) {
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}

void InsertNodeAtEnd() {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node)), *temp=NULL;
    node->next=NULL;
    temp=head;
    printf("\n\nEnter the node to Insert: ");
    scanf("%d",&node->data);
    while (temp->next) {
        temp=temp->next;
    }
    temp->next = node;
}








