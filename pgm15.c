#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev,*next;
};
int main()
{
typedef struct node NODE;
NODE *start=NULL, *temp, *p;
int i, ch, pos, item;
while(1)
{
printf("\n\n\tDoublY Linked List \n1.Insert into beginning\n2.Insert into end\n3.Delete from beginning\n4.Delete from end\n5. Display\n6.Exit");
printf("\n\nEnter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:
temp=(NODE*)malloc((sizeof(NODE)));
printf("Enter the data to be inserted: ");
scanf("%d", &temp->data);
if(start==NULL)
{
temp->prev=NULL;

temp->next=NULL;
start=temp;
}
else
{
temp->next=start;
start->prev=temp;
temp->prev=NULL;
start=temp;
}
break;
case 2:
temp=(NODE*)malloc((sizeof(NODE)));
printf("Enter the data to be inserted: ");
scanf("%d", &temp->data);
if(start==NULL)
{
temp->prev=NULL;
temp->next=NULL;
start=temp;
}
else
{
p=start;
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;

temp->next=NULL;
temp->prev=p;
}
break;
case 3:
if(start==NULL)
{
printf("No elements to delete!");
}
else
{
if(start->next==NULL)
{
temp=start;
item=temp->data;
printf("Deleted element is %d", temp->data);
free(temp);
start=NULL;
}
else
{
temp=start;
item=temp->data;
start=start->next;
start->prev=NULL;
free(temp);
printf("Deleted element: %d", item);
}
}

break;
case 4:
if(start==NULL)
{
printf("No elements to display!");
}
else
{
if(start->next==NULL)
{
temp=start;
item=temp->data;
printf("Deleted element is %d", temp->data);
free(temp);
start=NULL;
}
else
{
p=start;
temp=p->next;

while(temp->next!=NULL)
{
p=p->next;
temp=temp->next;
}
p->next=NULL;
printf("Deleted element is %d", temp->data);
free(temp);

}
}
break;
case 5:
if(start==NULL)
{
printf("\nNo elements");
}
else
{
printf("\nElements are: ");
p=start;
while(p->next!=NULL)
{
printf("%d <=>", p->data);
p=p->next;
}
printf("%d ", p->data);

}
break;
case 6:
exit(0);
}
}
}
