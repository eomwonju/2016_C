#include <stdio.h>
#include <stdlib.h>

int get_line_parameter(int x1,int y1,int x2,int y2,double*slope,double*yintercept)
{
	if((x1==x2)&&(y1==y2)==1)
		return -1;
	else if((x1==x2)&&(y1==y2)==0)
	{
		*slope=(y2-y1)/(x2-x1);
		*yintercept=((y2-y1)/(x2-x1))*(-x1)+y1;
		return 0;
	}
}

int main(void)
{
	int x1,y1,x2,y2;
	double a,b;
	while(1)
	{
		printf("x1y1x2y2 : ");
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		switch(get_line_parameter(x1,y1,x2,y2,&a,&b))
		{
			case -1:printf("ERROR\n");exit(1);
			case 0:
				{
					if(&b<0)
						printf("y = %f * x %f\n",&a,&b);
					else if(&b==0)
						printf("y = %f * x\n",&a);
					else if(&b>0)
						printf("y = %f * x + %f\n",&a,&b);
				}
				break;
			default:printf("again\n");
				break;
		}
	}
	return 0;
}