//This is a biolerplate code for creating a linkedlist.

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
}*list1=NULL,*list2=NULL,*temp=NULL;

struct Node *CreateList();
struct Node *CreateNode();
void compare(struct Node* head1, struct Node **head2);
void Display(struct Node *list);

int main() {
    list1 = CreateList();
//    list2 = CreateList();
    Display(list1);
//    Display(list2);
//    int a = 10;
//    printf("\nThe address : %p",&a);
    struct Node* temp = list1;
    while (temp) {
        printf("%p ",temp);
        temp=temp->next;
    }
    
    printf("\n");
    
    printf("\nlist1 : %p",list1);
    printf("\nlist1->data : %d",list1->data);
    printf("\n&(list1) : %p",&(list1));
    
    printf("\n\nlist1->next : %p",list1->next);
    printf("\nlist1->next->data : %d",list1->next->data);
    printf("\n&(list1->next) : %p\n",&(list1->next));
    printf("\n&(list1->next->next) : %p\n",&(list1->next)->next);
    
    printf("\n\nlist1->next->next : %p",list1->next->next);
    printf("\nlist1->next->next->data : %d",list1->next->next->data);
    printf("\n&(list1->next->next) : %p\n",&(list1->next->next));
    
    
    
//    printf("\n The Address of list inside main: %p",list1);
    compare(list1, &list1);
//    Display(list1);
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

void compare(struct Node* head1, struct Node **head2)
{
//    struct Node* newnode = malloc(sizeof(struct Node));
//    newnode->data=data;
//    newnode->next=head;
//    printf("\n The Address of head inside compare: %p",head);
//    head = newnode; // *head stores the newnode in the head
//    
//    printf("\n The Address of head inside compare: %p",head);
//    
//    printf("\n");
//    while (head) {
//        printf("%d ",head->data);
//        head=head->next;
//    }
//    printf("\n");
    
    
//    printf("The address : %p",);
    
    
    
    
    
}
