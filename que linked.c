#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start=NULL;
void deletel();
void insert();
void display();
void insertatbeg();
void deleteatend();
struct node* createlist()
{
    struct node *m;
    m=(struct node*)malloc(sizeof(struct node));
    return (m);

}
void insert()
{
    struct node *temp,*p;

    temp=createlist();
    printf("enter value of data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        p=start;
        while(p->link!=NULL)
        p=p->link;
    p->link=temp;


    }
}
void display()
{
    struct node *p;
    p=start;
    if(start==NULL)
        printf("sorry are u idiot\n");
    else{
    while(p!=NULL)
    {
        printf("%d",p->data);
        p=p->link;
    }
}
}
void deletel()
{
    struct node *k;
    if(start==NULL)
        printf("sorry bhai u are making ur future dark\n");
        if(start->link==NULL){
            start=NULL;
        }
        else
        {
            k=start;
            start=start->link;
            free(k);

        }

}
void insertatbeg()
{
    struct node *temp;
    temp=createlist();
    printf("enter a no. to add begining\n");
    scanf("%d",&temp->data);


        temp->link=start;
        start=temp;




}
void deleteatend()
{
    struct node *t,*secondlast;
    if(start==NULL)
    {
        printf("nothing to say u idiot\n");
    }
    else if(start->link==NULL){
        start=NULL;
    }
    else
    {
        t=start;
        secondlast=start;
        while(t->link!=NULL)
        {
            secondlast=t;
            t=t->link;
        }
        secondlast->link=NULL;
        free(t);




    }
}
    int main()
    {
        int c;
        while(1)
        {
            printf("\n1.insert from end the no.\n");
            printf("2.display the no.\n");
            printf("3.delete from front the no.\n");
            printf("4.insert from begining the no.\n");
            printf("5.delete from last the no.\n");
            printf("enter choice\n");
            scanf("%d",&c);
            switch(c)
            {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                deletel();
                break;
            case 4:
                insertatbeg();
                break;
           case 5:
                deleteatend();
                break;


            }
        }
    }

