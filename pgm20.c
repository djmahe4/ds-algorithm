#include<stdio.h>
#define max 20
void quicksort(int a[],int l,int h);
int a[max],n,i,l,h;
int main()
{
printf("Enter the no.of elements: ");
scanf("%d",&n);
printf("Enter the elements: ");
for(i=0;i<=n-1;i++)
scanf("%d",&a[i]);
l=0;
h=n-1;
quicksort(a,l,h);
printf("\nSorted array: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
void quicksort(int a[],int l,int h)
{
int temp,key,low,high;
low=l;
high=h;
key=a[high];
do
{
while(key>a[low])
low++;
while(key<a[high])
high--;
if(low<=high)
{
temp=a[low];
a[low++]=a[high];
a[high--]=temp;
}
}
while(low<=high);
if(l<high)
quicksort(a,l,high);
if(low<h)
quicksort(a,low,h);
}
