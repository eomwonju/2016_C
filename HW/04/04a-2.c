#include <stdio.h>

void print_menu(void)
{
	printf("1. 햄버거\n");
	printf("2. 치즈버거\n");
	printf("3. 샌드위치\n");
	printf("4. 종료\n");
	printf("원하는 메뉴를 선택하시오 : ");
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
				printf("햄버거를 선택하셨습니다.\n");
			else if(n==2)
				printf("치즈버거를 선택하셨습니다.\n");
			else if(n==3)
				printf("샌드위치를 선택하셨습니다.\n");
			else if(n==4)
				break;
		}
		else
		{
			if(n==1)
				printf("햄버거를 선택하셨습니다.\n");
			else if(n==2)
				printf("치즈버거를 선택하셨습니다.\n");
			else if(n==3)
				printf("샌드위치를 선택하셨습니다.\n");
			else if(n==4)
				break;
		}
	}
	return 0;
}