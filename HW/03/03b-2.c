#include <stdio.h>

int main(void)
{
	int a[10][20],s[20],n[10];
	int i,j,q,tot,total=0;
	double avg; // avg를 정수가 아닌 실수로 선언

	printf("---------------------------------------------------------\n");
	
	printf("정답<20개> 입력 : ");
	for(i=0; i<20; i++)
		scanf("%d",&s[i]);
	
	printf("---------------------------------------------------------\n");

	for(j=0; j<10; j++)
	{
		printf("학번입력 : ");
		scanf("%d",&n[j]);
		printf("답<20개> 입력 : ");
		for(i=0; i<20; i++)
			scanf("%d",&a[j][i]);
	}

	printf("---------------------------------------------------------\n");
	
	printf("정답<20개> : ");
	for(i=0; i<20; i++)
		printf("%d ",s[i]);
	
	printf("\n----------------------------------------------------------\n");

	for(i=0,tot=0; i<10; i++)
	{
		printf("%d : ",n[i]);
		for(j=0,q=0,tot=0; j<20; j++)
		{
			if(s[j]==a[i][j])
			{
				printf("O ");
				tot=tot+5;
			}
			else
				printf("X ");
		}
		printf("tot = %d\n",tot);
		total+=tot;
	}

	printf("----------------------------------------------------------\n");
	
	avg=total/10;
	printf("total = %d, avg = %.3f\n",total,avg);
	
	return 0;
} // 전체적으로 반복문을 사용하여 간단하게 수정