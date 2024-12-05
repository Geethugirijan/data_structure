#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a1[100],a2[100],a1_size,a2_size,i,j,temp,total,size=0;
 printf("enter the size of the 1st array:");
 scanf("%d",&a1_size);
 printf("enter the element of the array:");
 for(i=0;i<a1_size;i++)
 {
 printf("array_1[%d]:",i+1);
 scanf("%d",&a1[i]);
 } 
 printf("enter the size of the 2nd array:");
 scanf("%d",&a2_size);
 printf("enter the element of the array:");
 for(i=0;i<a2_size;i++)
 {
 printf("array_2[%d]:",i+1);
 scanf("%d",&a2[i]);
 } 
 total=a1_size+a2_size;
 for(i=a1_size;i<total;i++)
 {
 a1[i]=a2[size];
 size=size+1;
 }
 for(i=total;i>0;i--)
 {
 for(j=0;j<total-1;j++)
 {
 if(a1[j]>a1[j+1])
 {
 temp=a1[j];
 a1[j]=a1[j+1];
 a1[j+1]=temp;
 }
 }
 }
 printf("\n.........................................\n");
 printf("array elements are:\n");
 for(i=0;i<total;i++)
 {
 printf("a[%d]:%d\n",i,a1[i]);
 }
 return 0;
}
