#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *head){
    struct node *ptr;
    while(head != NULL){
    printf("Element\n",ptr->data);
    ptr = ptr->next;
    }
    return ptr;
}
int main(){
    struct node * head;
    struct node * first;
    struct node * second;

    head = (struct node *) malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));

    head->data =67;
    head->next = first;

    first ->data = 89;
    first->next = second;

    second ->data = 90;
    second ->next = NULL;

    linkedlistTraversal(head);
     return 0;
    
}