#include <stdio.h>

int main(void)
{
	int a[10][20],s[20],n[10];
	int i,j,q,tot,total=0;
	double avg; // avg�� ������ �ƴ� �Ǽ��� ����

	printf("---------------------------------------------------------\n");
	
	printf("����<20��> �Է� : ");
	for(i=0; i<20; i++)
		scanf("%d",&s[i]);
	
	printf("---------------------------------------------------------\n");

	for(j=0; j<10; j++)
	{
		printf("�й��Է� : ");
		scanf("%d",&n[j]);
		printf("��<20��> �Է� : ");
		for(i=0; i<20; i++)
			scanf("%d",&a[j][i]);
	}

	printf("---------------------------------------------------------\n");
	
	printf("����<20��> : ");
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
} // ��ü������ �ݺ����� ����Ͽ� �����ϰ� ����