#include<stdio.h>
#include<stdlib.h>
int array[100],i;
int array_count=0;
void create()
{
	int i;
	printf("\n.............\n");
	printf("\n total number of element in the array:");
	scanf("%d",&array_count);
	printf("\nenter %d element\n\n",array_count);
	for(i=0;i<array_count;i++)
	{
		printf("Array[%d]:",i+1);
		scanf("%d",&array[i]);
		printf("\n");
	}
	printf("\n.............\n");
}

void insert()
{
int ins_pos,i,new_val;
printf("\n...........................................\n");
printf("\n position of insertion: ");
scanf("%d",&ins_pos);
for(i=array_count-1;i>=ins_pos-1;i--)
{
array[i+1]=array[i];
}
printf("which value you want to add:");
scanf("%d",&new_val);
array[ins_pos-1]=new_val;
printf("\n\n new array is:\n\n");
array_count=array_count+1;
for(i=0;i<array_count;i++)
{
printf("%d\n",array[i]);
}
printf("\n............\n");
}


void delete()
{
int del_pos,i;
printf("\n..........................................\n");
printf("\n position of deletion: ");
scanf("%d",&del_pos);
for(i=del_pos-1;i<array_count-1;i++)
{
array[i]=array[i+1];
}
printf("\n\n new array is:\n\n");
array_count=array_count-1;
for(i=0;i<array_count;i++)
{
printf("%d\n",array[i]);
}

printf("\n.............\n");
}

void view()
{
int i;
printf("\n.............\n");
printf("elements are: \n");
for(i=0;i<array_count;i++)
{
printf("%d\n",array[i]);
}
printf("\n.............\n");
}

int main()
{
int opt=0;
while(1)
{
printf("\n............\n");
printf("1.create\n2.insert\n3.delete\n4.view\n5.quit\n");
printf("choose your option\n");
scanf("%d",&opt);
printf("\n.............\n");
switch(opt)
{
case 1:create();
      break;
case 2:insert();  
      break;
case 3:delete();
      break;
case 4:view();
      break;
case 5:exit(0);
default:printf("invalid option");          

}

}
printf("ok");
return 0;
}










