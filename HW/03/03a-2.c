#include <stdio.h>

int main(void)
{
	int num1,num2,sum,max,min;

	printf("ù��° �� �Է� : ");
	scanf("%d",&num1);

	printf("�ι�° �� �Է� : ");
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

	printf("%d���� %d������ ������ ���� %d�Դϴ�.",num1,num2,sum);

	return 0;
}
