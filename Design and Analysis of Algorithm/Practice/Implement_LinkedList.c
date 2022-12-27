#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main(){
	//declaring nodes
	struct node *head,*middle,*last;
	//allocating memory for each node
	head =malloc(sizeof(struct node));
	middle =malloc(sizeof(struct node));
	last =malloc(sizeof(struct node));
	
	//assigning values to each node
	head->data=10;
	middle->data=20;
	last->next=NULL;
	
	//temp is a reference for head pointer
	struct node *temp=head;
	while(temp!=NULL){
		printf("value=%d",temp->data);
		temp=temp->next;
	}
	return 0;
}

