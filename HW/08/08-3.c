#include <stdio.h>

static int compare_count=0;

int comparenum(int v1, int v2)
{
	compare_count++;
	if(v1>v2)
		return 1;
	else if(v1<v2)
		return -1;
	else return 0;
}

void swap(int arr[], int a, int b)
{
	int temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;
}

void array_print(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void sort_insertion2(int arr[], int n)
{
	int i,j,num;
	for(i=1; i<n; i++)
	{
		for(j=i; j>0; j--)
		{
			if (comparenum(arr[j-1], arr[j])==1)
			{
				swap(arr, j-1, j);
			}
			else
				break;
		}
		array_print(arr,n);
		num=compare_count;
		printf("<compare_count = %d>\n",num);
	}
}

int main(void)
{
	int arr[1000], n;
	printf("Enter numbers <0,1,2, ...> : ");
	for(n=0; n<1000; n++)
	{
		scanf("%d",&arr[n]);
		if(arr[n]<0)
			break;
	}
	sort_insertion2(arr,n);
	return 0;
}