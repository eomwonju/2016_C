#include <stdio.h>

void print_menu(void)
{
	printf("1. �ܹ���\n");
	printf("2. ġ�����\n");
	printf("3. ������ġ\n");
	printf("4. ����\n");
	printf("���ϴ� �޴��� �����Ͻÿ� : ");
}

int get_menu(void)
{
	int n;
	scanf("%d",&n);
	if(1<=n&&n<=4)
		return n;
	else return 0;
}

int main(void)
{
	int n;
	while(1)
	{
		print_menu();
		if(n=get_menu())
		{
			if(n==1)
				printf("�ܹ��Ÿ� �����ϼ̽��ϴ�.\n");
			else if(n==2)
				printf("ġ����Ÿ� �����ϼ̽��ϴ�.\n");
			else if(n==3)
				printf("������ġ�� �����ϼ̽��ϴ�.\n");
			else if(n==4)
				break;
		}
		else
		{
			if(n==1)
				printf("�ܹ��Ÿ� �����ϼ̽��ϴ�.\n");
			else if(n==2)
				printf("ġ����Ÿ� �����ϼ̽��ϴ�.\n");
			else if(n==3)
				printf("������ġ�� �����ϼ̽��ϴ�.\n");
			else if(n==4)
				break;
		}
	}
	return 0;
}