#include <stdio.h>

int main(void)
{
	int num=0, sum=0, i=0;

	do
	{
		printf("100������ �ڿ����� �Է� : ");
		scanf("%d",&num);
		
		if(num>0&&num<=100) // &�� &&�� ����
		{
			i++;
			sum+=num;
		}
		else
		{
			printf("������ �ʽ��ϴ�.\n");
		}
	} while(sum<=100);

	printf("���ݱ��� �Է��� �ڿ��� %d���� ���� %d�Դϴ�.\n",i,sum);
	return 0;
}