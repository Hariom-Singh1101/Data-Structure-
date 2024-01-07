#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insertion(struct node *ptr){
    while(ptr!=NULL){
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
}
printf("\n");
}
struct node*insertionAtBegning(struct node*head,int data){
    struct node *ptr=(struct node*) malloc (sizeof (struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

int main(){
    struct node*head;
    struct node*first;
    struct node*second;
    struct node*third;
    head=(struct node*) malloc (sizeof(struct node));
    first=(struct node*) malloc (sizeof(struct node));
    second=(struct node*) malloc (sizeof(struct node));
    third=(struct node*) malloc (sizeof(struct node));
    head->data=88;
    head->next=first;
    first->data=55;
    first->next=second;
    second->data=45;
    second->next=third;
    third->data=76;
    third->next=NULL;
    insertion(head);
    head=insertionAtBegning(head,99);
    insertion(head);

    return 0;
}
