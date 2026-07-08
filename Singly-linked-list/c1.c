#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
int main(){
    struct Node *head=NULL;
    struct Node *newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    int ele;
    printf("Enter a element : ");
    scanf("%d",&ele);
    newNode->data=ele;
    newNode->next=NULL;
    head=newNode;
    
    printf("%d",head->data);
}
