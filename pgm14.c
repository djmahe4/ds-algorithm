#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *ptr;
};
int main()
{
typedef struct node NODE;
NODE *start=NULL, *temp, *p;
int i, ch, pos, item;
while(1)
{
printf("\n\n\tQueue Using Linked List\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\nEnter your choice: ");
scanf("%d", &ch);
switch(ch)
{
case 1:
temp=(NODE*)malloc((sizeof(NODE)));
printf("Enter the data to be inserted: ");
scanf("%d", &temp->data);

if(start==NULL)
{
temp->ptr=NULL;
start=temp;
}
else

{
p=start;
while(p->ptr!=NULL)
{
p=p->ptr;
}
p->ptr=temp;
temp->ptr=NULL;
}
break;
case 2:
if(start==NULL)
{
printf("No elements to delete!");
}
else
{
if(start->ptr==NULL)
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
start=start->ptr;
free(temp);

printf("Deleted element: %d", item);
}
}
break;
case 3:
if(start==NULL)
{
printf("No elements");
}
else
{
printf("\nElements are: ");
p=start;
while(p->ptr!=NULL)
{
printf("%d ", p->data);
p=p->ptr;
}
printf("%d", p->data);
}
break;
case 4:
exit(0);
}
}
}
