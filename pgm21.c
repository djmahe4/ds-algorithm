#include<stdio.h>
int l,a[10],n,b[10],i;
void merge(int a,int b,int c);
void mergesort(int a,int b);
int main()
{
printf("Enter the no.of elements: ");
scanf("%d",&n);
printf("\nEnter the elements: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
mergesort(0,n-1);
printf("\nSorted elements are: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
void mergesort(int l,int h)
{
int mid;
if(l<h)
{
mid=(l+h)/2;
mergesort(l,mid);
mergesort(mid+1,h);
merge(l,mid,h);
}
}
void merge(int l,int mid,int h)
{
int hi=l,i=l,j=mid+1,k;
while(hi<=mid&&j<=h)
{
if(a[hi]<=a[j])
{
b[i]=a[hi];
hi=hi+1;
}
else
{
b[i]=a[j];
j=j+1;
}
i=i+1;
}

if(hi<=mid)
{
for(k=hi;k<=mid;k++)
{
b[i]=a[k];
i=i+1;
}
}
else
{
for(k=j;k<=h;k++)
{
b[i]=a[j];
i++;
}
}
for(k=l;k<=h;k++)
{
a[k]=b[k];
}
}
