#include<stdio.h>
#include<math.h>

int main(void)
{
	int i;
	int a[7]={17,25,30,45,67,12,34};

	double sum=0,mean,v,s;
	
	for(i=0;i<7;i++)
	{
		sum+=a[i];
		printf("%d번째 정수 입력 : %d\n",i+1,a[i]);
	}

	mean=sum/i;
	sum=0;

	for(i=0;i<7;i++)
		sum+=pow(a[i]-mean,2);
	v=sum/i;
	s=sqrt(v);

	printf("<result>\n");
	printf("mean=%.2f,v=%.2f,s=%.2f\n",mean,v,s);
	return 0;
}
