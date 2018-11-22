#include <stdio.h>

int main(void)
{
	int num1,num2,sum,max,min;

	printf("첫번째 수 입력 : ");
	scanf("%d",&num1);

	printf("두번째 수 입력 : ");
	scanf("%d",&num2);

	if(num1>num2)
		max=num1, min=num2;
	else
		max=num2, min=num1;
	++min;

	for(sum=0; min<max; min++)
	{
		sum=sum+min;
	}

	printf("%d에서 %d사이의 정수의 합은 %d입니다.",num1,num2,sum);

	return 0;
}
