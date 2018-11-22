#include <stdio.h>

int main(void)
{
	int num=0, sum=0, i=0;

	do
	{
		printf("100이하의 자연수를 입력 : ");
		scanf("%d",&num);
		
		if(num>0&&num<=100) // &를 &&로 수정
		{
			i++;
			sum+=num;
		}
		else
		{
			printf("더하지 않습니다.\n");
		}
	} while(sum<=100);

	printf("지금까지 입력한 자연수 %d개의 합은 %d입니다.\n",i,sum);
	return 0;
}