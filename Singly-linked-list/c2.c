#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
int main(){
    
    struct Node *newNode;
    struct Node *temp;
    struct Node *head;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    int ele,pos,i;
    printf("Enter a element and position : ");
    scanf("%d %d",&ele,&pos);
    temp=head;
    newNode->data=ele;
    for(i=0;i<pos;i++){
    	temp=temp->next;
	}
    temp->next=newNode->next;
    newNode->next=temp->next;
    
    printf("%d",head->data);
}
