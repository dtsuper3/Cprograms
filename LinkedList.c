#include<stdio.h>
void insertNode();
void deleteNode();
void viewList();
struct node{
    int info;
    struct node *link;
};
struct node *START=NULL;
struct node* createNode(){
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}
void insertNode(){
    struct node *temp,*t;
    temp=createNode();
    printf("Enter a number:");
    scanf("%d",temp->info);
    temp->link=NULL;
    if(START==NULL)
        START=temp;
    else{
        t=START;
        while(t->link!=NULL){
            t=t->link;
        }
        t->link=temp;
    }
}
void deleteNode(){
    struct node *r;
    if(START==NULL)
        printf("List is empty");
    else{
        r=START;
        START=START->link;
        free(r);
    }
}
void viewList(){
    struct node *t;
    if(START==NULL)
        printf("Link is empty");
    else{
        t=START;
        while(t!=NULL){
            printf("%d",t->info);
            t=t->link;
        }
    }
}
void main(){
    int ch;
    printf("1.Add");
    printf("\n2.Delete");
    printf("\n3.View List");
    printf("\n4.Exit");
    printf("\nEnter your choice");
    scanf("%d",&ch);
    return(ch);
    while(1){
        switch(ch){
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewList();
            break;
        case 4:
            exit(0);
        default:
            printf("You enter wrong choice!");
            break;
        }
    }
}
