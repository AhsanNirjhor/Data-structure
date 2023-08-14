#include<stdio.h>
#include<stdlib.h>

/*struct node *insertAtBeginning(struct node *ptr){
    struct node {
        int data;
        struct node *next;// decleration of linked list datatype
    };
    struct node *head ,*newnode ;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data you want at beginning\n");
    scanf("%d",& newnode ->data);
    newnode ->next = head ;
    head =  newnode;
    return head;
}*/

/*void insertAtEnd(){
    struct node {
        int data;
        struct node *next;// decleration of linked list datatype
    };
    struct node *head ,*newnode , *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data you want at end\n");
    scanf("%d",& newnode ->data);
    newnode->next = 0;
    temp = head;
    while(temp->next != 0){
        temp  = temp->next;
    }
    temp->next =  newnode;
}*/

int count =0;
/*void insetAtPosition(){
    struct node{
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    int pos , i=1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the position you want to insert \n");
    scanf("%d",&pos);
    if (pos>count){
        printf("invalid position");
    }
    else{
        temp = head ;
        while(i<pos){
            temp = temp ->next;
            i++;
        }
        printf("Enter data you want to insert\n");
        scanf("%d",& newnode->data);
        newnode ->next = temp->next;
        temp->next =  newnode;
    }

}*/

void deleteFromBeg(){
    struct node {
        int data;
        struct node *next;// decleration of linked list datatype
    };
    struct node *temp, *head;
    if(head == 0){
        printf("Linklist dosen't exist");

    }
    temp = head;
    head = head->next;
    free(temp);
}

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
        count ++;
        printf("Do you want to cointinue (0,1)");
        scanf("%d",&choice);
    }
    //insertAtBeginning(head);
    /*newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data you want at beginning\n");
    scanf("%d",& newnode ->data);
    newnode ->next = head ;
    head =  newnode;*/

    /*newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data you want at end\n");
    scanf("%d",& newnode ->data);
    newnode->next = 0;
    temp = head;
    while(temp->next != 0){
        temp  = temp->next;
    }
    temp->next =  newnode;*/

    /*int pos , i=1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the position you want to insert \n");
    scanf("%d",&pos);
    if (pos>count){
        printf("invalid position");
    }
    else{
        temp = head ;
        while(i<pos){
            temp = temp ->next;
            i++;
        }
        printf("Enter data you want to insert\n");
        scanf("%d",& newnode->data);
        newnode ->next = temp->next;
        temp->next =  newnode;
    }*/

    /*if(head == 0){
        printf("Linklist dosen't exist");

    }
    temp = head;
    head = head->next;
    free(temp);*/

    temp = head;// display or traverse the linked list
    while (temp != 0)
    {
        printf("%3d", temp->data);
        temp = temp ->next;
    }
    
    
    return 0;
}