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
printf("\n\n\tSingle Linked List\n1. Insert into beginning\n2. Insert into end\n3. Insert into particular position\n4. Delete from beginning\n5. Delete from end\n6. Delete from particular position\n7. Display\n8. Exit\n\nEnter your choice: ");
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
temp->ptr=start;
start=temp;
}
break;
case 2:
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
case 3:
temp=(NODE*)malloc((sizeof(NODE)));
printf("Enter the data to be inserted: ");
scanf("%d",& temp->data);

if(start==NULL)
{
temp->ptr=NULL;
start=temp;
}
else
{ p=start;
printf("Enter position: ");
scanf("%d", &pos );
if(pos==1)
{
temp->ptr=start;
start=temp;
}
else
{
for(i=1; i<pos-1; i++)
{
p=p->ptr;
}
temp->ptr=p->ptr;
p->ptr=temp;
}
}
break;
case 4:
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
free(temp);
start=NULL;
}
else
{
temp=start;
item=temp->data;
start=start->ptr;
free(temp);
}
}
break;
case 5:
if(start==NULL)
{
printf("No elements to display!");
}
else
{
if(start->ptr==NULL)
{
temp=start;
item=temp->data;
free(temp);

start=NULL;
}
else
{
p=start;
temp=p->ptr;
while(temp->ptr!=NULL)
{
p=p->ptr;
temp=temp->ptr;
}
p->ptr=NULL;
free(temp);
}
}
break;
case 6:
if(start==NULL)
{
printf("List is empty");
}
else
{
printf("Enter the position: ");
scanf("%d", &pos);
if(pos==1)
{
temp=start;
start=start->ptr;
free(temp);

}
else
{
p=start;
for(i=1; i<pos-1; i++)
{
p=p->ptr;
}
temp=p->ptr;
p->ptr=temp->ptr;
free(temp);
}
}
break;
case 7:
if(start==NULL)
{
printf("No elements");
}
else
{
p=start;
while(p->ptr!=NULL)
{
printf("%d -> ", p->data);
p=p->ptr;
}
printf("%d", p->data);
}
break;

case 8:
exit(0);
}
}
}