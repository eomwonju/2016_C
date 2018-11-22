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

void selection_sort(int arr[], int n)
{
	int i,j,num;
	int min_i=0;
	for(i=0; i<n-1; i++)
	{
		min_i=i;
		for(j=i+1; j<n; j++)
		{
			if (comparenum(arr[min_i], arr[j])==1)
			{
				min_i=j;
			}
		}
		if (min_i!=i)
		{
			swap(arr,min_i,i);
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
	selection_sort(arr,n);
	return 0;
}
