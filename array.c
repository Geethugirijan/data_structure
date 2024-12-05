#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a[100],size,i,pos,val;
 printf("enter the size of the array:");
 scanf("%d",&size);
 printf("enter the element of the array:");
 for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 } 
 
 
 
 printf("enter the position of the element to be insert:");
 scanf("%d",&pos);
 printf("enter the value you want to add:");
 scanf("%d",&val);
 for(i=size-1;i>=pos-1;i--)
 {
 a[i+1]=a[i];
 }
 a[pos-1]=val;
 printf("resultant array is \n");
 for(i=0;i<=size;i++)
 {
 printf("%d \n",a[i]);
 }
 return 0;
}
