#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void get(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("number %d : ",i+1);
		scanf("%d",arr+i);
	}
}

void sort_entekhabi(int *arr,int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if( *(arr+j) > *(arr+(j+1)) )
			{
				temp=*(arr+j);
				*(arr+j)=*(arr+(j+1));
				*(arr+(j+1))=temp;
			}
		}
	}
}

void show(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\naddress %p is : %d",&arr+i,*(arr+i));
	}
}

void main()
{
	clrscr();
	int *arr;
	int n;
	printf("please enter a number : ");
	scanf("%d",&n);
	arr=(int*) malloc(n*sizeof(int));
	if(!arr) { printf("\n Erorr!!"); exit(1); }
	get(arr,n);
	sort_entekhabi(arr,n);
	show(arr,n);
	free(arr);
	getch();
}