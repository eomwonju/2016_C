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

void sort_quick(int arr[], int L, int H)
{
	int mid=(L+H)/2,num;
	int pivot=arr[mid];
	int p=L+1,q=H;

	if(L>=H)
		return;

	swap(arr,L,mid);

	while(1)
	{
		while(arr[p]<=pivot)
		{
			p++;
		}

		while(arr[q]>pivot)
		{
			q--;
		}

		if(p>q)
			break;

		swap(arr,p,q);
	}

	swap(arr,L,q);

	printf("<L = %d, H = %d> ",L,H);
	array_print(arr,H+1);
	num=compare_count;
	printf("<compare_count = %d>\n",num);
	sort_quick(arr,L,q-1);
	sort_quick(arr,q+1,H);
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
	sort_quick(arr,0,n-1);
	return 0;
}