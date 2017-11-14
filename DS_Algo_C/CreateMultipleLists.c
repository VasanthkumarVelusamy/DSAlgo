//This is a biolerplate code for creating a linkedlist.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*list1=NULL,*list2=NULL,*temp=NULL;

struct Node *CreateList();
struct Node *CreateNode();
void Display(struct Node *list);

int main() {
    list1 = CreateList();
    list2 = CreateList();
    Display(list1);
    Display(list2);
}

struct Node *CreateList(){
    int count=1, numberOfItems;
    struct Node *node, *head=NULL;
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
    return head;
}
struct Node *CreateNode(){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->next = NULL;
    scanf("%d",&node->data);
    return node;
}
void Display(struct Node *list){
    struct Node* temp = list;
    printf("\n");
    while (temp) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
