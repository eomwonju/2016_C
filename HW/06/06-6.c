#include <stdio.h>

int judge_leap_year1(int year)
{
	if(year%400==0)
		return 1;
	else if(year%100==0)
		return 0;
	else if(year%4==0)
		return 1;
	else return 0;
}

int judge_leap_year2(int year)
{
	return (year%4==0)&&(year%100!=0)||(year%400==0);
}


int main(void)
{
	int year;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d",&year);

	if((judge_leap_year1(year)==1)&&(judge_leap_year2(year)==1))
		printf("%d�� �����̴�.\n",year);
	else
		printf("%d�� ������ �ƴϴ�.\n",year);

	return 0;

}