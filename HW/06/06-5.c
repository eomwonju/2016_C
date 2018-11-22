#include <stdio.h>
#include <math.h>

int distance(double x, double y)
{
	int distance;
	distance=pow((x-y),2);
	return distance;
}
 
int main(void)
{
	int i,arr[100]={0};

	printf("Enter 1-dim numbers : ");

	for(i=0; i<100; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i]==-1)
			break;
	}

	return 0;
}