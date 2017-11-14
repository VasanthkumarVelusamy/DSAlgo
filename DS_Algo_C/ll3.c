//this program uses code from ll1.c to create a sample linked list.
//In addition to that, this program inserts node at the head.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
} *head=NULL;

void CreateList();
void DisplayList(struct Node *head);
void InsertNodeAtHead();

int main(){
    CreateList();
    DisplayList(head);
    InsertNodeAtHead();
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
    
    struct Node *tmp = head;
    while (tmp) {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

void InsertNodeAtHead() {
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    printf("\n\nEnter the node to Insert: ");
    scanf("%d",&node->data);
    node->next=head;
    head = node;
}
