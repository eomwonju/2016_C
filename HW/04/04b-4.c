#include <stdio.h>

int sum(int num);
static int cntFunction=0;

int main(void)
{
	int num,total,j,n;

	printf("임의의 정수 하나를 입력하세요 : ");
	scanf("%d",&num);

	for (j=1; j<num+1; j++)
	{
		total=sum(j);
		printf("1부터 %d까지의 합은 %d이다.\n",j,total);
	}

	printf("합을 구하는 함수가 총 %d번 호출되었습니다.\n",cntFunction);

	return 0;
}

int sum(int num)
{
	int i;
	int total=0;
	for (i=0; i<num+1; i++)
		total+=i;
	cntFunction++;
	return total;
}