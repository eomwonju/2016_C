#include <stdio.h>
#include <stdlib.h>

int is_leap_year(int year)
{
	return (year%4==0)&&(year%100!=0)||(year%400==0);
}

int main(void)
{
	int year, month, day, n;
	int numdaysmonth[]={31,28,31,30,31,30,31,31,30,31,30,31};

	printf("Current date <year month day>? ");
	scanf("%d%d%d",&year,&month,&day);

	if(month<=0||month>12)
		exit(1);
	else if(is_leap_year(year)==1&&month==2&&day>29)
		exit(1);
	else if(day>numdaysmonth[month-1]||day<=0)
		exit(1);

	printf("How many days you want to shift <+/->? ");
	scanf("%d",&n);

	if(is_leap_year(year)==1)
		numdaysmonth[1]=29;

	if(n>=0)
	{
		day+=n;

		if(is_leap_year(year)==1)
			numdaysmonth[1]=29;
		
		for(; day>numdaysmonth[month-1] ;)
		{
			day-=numdaysmonth[month-1];
			month+=1;
			if (month>12)
			{
				month=1;
				year+=1;
				if(is_leap_year(year)==1)
					numdaysmonth[1]=29;
			}
		}
		printf("New date = %d %d %d",year,month,day);
	}

	else
	{
		day+=n;

		if(is_leap_year(year)==1)
			numdaysmonth[1]=29;
		
		for(; day<0 ;)
		{
			month-=1;
			day+=numdaysmonth[month-1];
			if (month<=0)
			{
				month+=12;
				year-=1;
				if(is_leap_year(year)==1)
					numdaysmonth[1]=29;
			}
		}
		printf("New date = %d %d %d",year,month,day);
	}
	
	return 0;
}