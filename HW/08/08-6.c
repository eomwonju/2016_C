#include <stdio.h>

void sequence_print(int i)
{
	int j,k;
	if((2*i-1)>9)
	{
		for(j=(2*i-1)%9; j>0; j--)
			printf("%d",j);
		for(j=(2*i-1)/9; j>0; j--)
			for(k=9; k>0; k--)
				printf("%d",k);
	}
	else
		for(j=2*i-1; j>0; j--)
			printf("%d",j);
}

void space_print(int i, int n)
{
	int j;
	for(j=(n+1)/2-i; j>0; j--)
		printf(" ");
}

int main(void)
{
	int n,i,j;

	while(1)
	{
		printf("Enter the number of lines <1,2,3, ...> : ");
		scanf("%d",&n);

		if(n>0)
			break;
	}

	for(i=1; i<(n+1)/2+1; i++)
	{
		space_print(i,n);
		sequence_print(i);
		printf("\n");
	}

	if(n%2==1)
	{
		for(i=(n-1)/2; i>0; i--)
		{
			space_print(i,n);
			sequence_print(i);
			printf("\n");
		}
	}

	else
	{
		for(i=(n+1)/2; i>0; i--)
		{
			space_print(i,n);
			sequence_print(i);
			printf("\n");
		}
	}

	return 0;
}
