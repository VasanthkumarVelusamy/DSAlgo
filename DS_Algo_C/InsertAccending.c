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
void Insert();
void sortedInsert(struct Node** head_ref, struct Node* new_node);
int main() {
    CreateList();
    Display();
//    Insert();
    sortedInsert(&head,CreateNode());
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

void Insert() {
    printf("\nEnter the item to insert: ");
    struct Node *node = CreateNode();
    temp=head;
    if (head==NULL || head->data > node->data) {
        node->next = head;
        head=node;
    }
    else {
        while (temp && temp->next->data<node->data) {
            temp=temp->next;
        }
        node->next=temp->next;
        temp->next=node;
    }
}

void sortedInsert(struct Node** head_ref, struct Node* new_node)
{
    if (head_ref == NULL)
    {
        return;
    }
    /* Locate the node before the point of insertion */
    struct Node** current = head_ref;
    
    while (*current !=NULL && (*current)->data < new_node->data)
    {
        current = &((*current)->next);
    }
    
    new_node->next = *current;
    *current = new_node;
}






