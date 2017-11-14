//This is a biolerplate code for creating a linkedlist.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*list1=NULL,*list2=NULL,*temp=NULL,*mergedList=NULL;

struct Node *CreateList();
struct Node *CreateNode();
void Display(struct Node *list);
void Merge(struct Node *list1, struct Node *list2);

int main() {
    list1 = CreateList();
    list2 = CreateList();
    Display(list1);
    Display(list2);
    Merge(list1,list2);
    Display(mergedList);
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
    if (list==NULL) {
        printf("\nList is empty");
        return;
    }
    struct Node* temp = list;
    printf("\n");
    while (temp) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void Merge(struct Node *list1, struct Node *list2) {
    struct Node *temp;
    mergedList = temp;
    printf("vasanth ");
    fflush(stdout);
    while (list1 && list2) {
        if (list1->data < list2->data) {
            if (temp == NULL) {
                temp = list1;
                list1 = list1->next;
                temp->next=NULL;
                continue;
            }
            temp->next=list1;
            list1 = list1->next;
            temp->next = NULL;
        }
        else {
            if (temp == NULL) {
                temp = list2;
                list2 = list2->next;
                temp->next=NULL;
                continue;
            }
            temp->next=list2;
            list2 = list2->next;
            temp->next = NULL;
        }
    }
    if (list1 == NULL) {
        temp->next = list2;
    }
    else{
        temp->next = list1;
    }
}







