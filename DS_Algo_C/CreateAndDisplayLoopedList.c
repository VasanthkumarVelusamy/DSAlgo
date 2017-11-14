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
void CreateLoop(struct Node *list);
void DisplayLoopedList(struct Node *LoopedList);
void DetectLoop(struct Node *list);
void RemoveLoop(struct Node* loopNode, struct Node* head);

int main() {
    list1 = CreateList();
    Display(list1);
    //    Display(list2);
    CreateLoop(list1);
    DisplayLoopedList(list1);
    DetectLoop(list1);
    Display(list1);
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
    printf("\n");
    while (list) {
        printf("%d ",list->data);
        list=list->next;
    }
    printf("\n");
}

void CreateLoop(struct Node *list) {
    struct Node *loopPosition = NULL, *current = list;
    int count=1, position;
    printf("\nEnter the Loop position: ");
    scanf("%d",&position);
    while (current->next) {
        if (count == position) {
            loopPosition = current;
        }
        current = current->next;
        count++;
    }
    current->next = loopPosition;
}

void DetectLoop(struct Node* list) {
    struct Node *slow = list, *fast = list;
    while (fast && fast->next) {
        slow=slow->next;
        fast=fast->next->next;
        if (fast == slow) {
            RemoveLoop(slow,list);
            printf("\nLoop fixed");
            return;
        }
    }
}

void RemoveLoop(struct Node* loopNode, struct Node* head) {
    struct Node *ptr1=head;
    struct Node *ptr2;
    
    while (1) {
        ptr2=loopNode;
        while (ptr2->next != loopNode && ptr2->next != ptr1) {
            ptr2=ptr2->next;
        }
        if (ptr2->next == ptr1) {
            break;
        }
        ptr1=ptr1->next;
    }
    printf("\nLoop Found: %d",ptr1->data);
    ptr2->next=NULL;
}

void DisplayLoopedList(struct Node *LoopedList) {
    int displayCount = 20;
    printf("\n");
    while (displayCount > 0) {
        printf("%d ",LoopedList->data);
        LoopedList=LoopedList->next;
        displayCount--;
    }
    printf("\n");
}




