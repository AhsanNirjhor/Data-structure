#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node {
        int data;
        struct node *next;// decleration of linked list datatype
    };
    struct node *head ,*newnode , *temp;
    head = 0;
    int choice = 1 ;
    while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));// allocating memory
        printf("Enter data\n");
        scanf("%d",& newnode ->data);// data entry
        newnode ->next =0;
        if (head == 0){
            head = temp = newnode;// set the head pointer
        }
        else{
            temp->next = newnode;
            temp = newnode;// linking the nodes
        }
        printf("Do you want to cointinue (0,1)");
        scanf("%d",&choice);
    }
    temp = head;// display or traverse the linked list
    while (temp != 0)
    {
        printf("%3d", temp->data);
        temp = temp ->next;
    }
    
    
    return 0;
}