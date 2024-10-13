#include<stdio.h>
int main()
{
int i,j,a[20],n,temp,k;
printf("\nEnter the no.of elements: ");
scanf("%d",&n);
printf("\nEnter the elements: ");
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
for(k=0;k<=n-1;k++)
{
temp=a[k];
j=k-1;
while(temp<a[j]&&j>=0)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;
}
printf("\nSorted elements are: ");
for(i=0;i<=n-1;i++)
printf("%d ",a[i]);
}
