#include <stdio.h>

int sum(int num);
static int cntFunction=0;

int main(void)
{
	int num,total,j,n;

	printf("������ ���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d",&num);

	for (j=1; j<num+1; j++)
	{
		total=sum(j);
		printf("1���� %d������ ���� %d�̴�.\n",j,total);
	}

	printf("���� ���ϴ� �Լ��� �� %d�� ȣ��Ǿ����ϴ�.\n",cntFunction);

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