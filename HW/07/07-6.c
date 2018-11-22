#include <stdio.h>

static int compare_count=0;

int main(void)
{
	int i,number_sequence[10],enter_numbers[]={0};

	printf("Number sequence that you want find <ending with -1 max 10 num> ? ");
	for(i=0; i<10; i++)
	{
		scanf("%d",&number_sequence[i]);
		if(number_sequence[i]=-1)
			break;
	}

	printf("target sequence = ");
	for(i=0; i<9; i++)
	{
		printf("%d ",number_sequence[i]);
	}

	printf("\nEnter numbers <-1 when done> : ");
	
	for(i=0; enter_numbers[i]!=-1; i++)
	{
		scanf("%d",&enter_numbers[i]);
	}

	printf("Number of input digits = %d",sizeof(enter_numbers)-1);

	printf("Compare count = %d",compare_count);
	printf("Number of matching = %d",);
	printf("matched position = ");
	return 0;
}

int comparenum(int num1, int num2)
{
	compare_count++;
	return num1==num2;
}