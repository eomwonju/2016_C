#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double get_magnitude(double re, double im);
double get_angle(double re, double im);
double rad_to_deg(double rad);

int main (void)
{
	double a,b,c,D,root1,root2,root3,real_num=0,imaginary_num=0;

	while(1)
	{
		printf("������������ ��� a,b,c�� �Է��Ͻÿ�. (a=0 and b=0 to stop) : ");
		scanf("%lf%lf%lf",&a,&b,&c);

		D=b*b-4*a*c;
		root1=(-b+sqrt(b*b-4*a*c))/(2*a);
		root2=(-b-sqrt(b*b-4*a*c))/(2*a);
		root3=-c/b;

		if(a==0&&b==0)
			break;
		else if(a==0&&b!=0)
			printf("	root = %lf\n",root3);
		else if(D>0)
			printf("	real roots = %lf, %lf\n",root1,root2);
		else if(D<0)
		{
			real_num=-b/(2*a);
			imaginary_num=sqrt(-b*b+4*a*c)/(2*a);
			printf("	complex roots = %lf+j%lf\n",real_num,imaginary_num);
			printf("			abs = %lf\n",get_magnitude(real_num,imaginary_num));
			printf("			angle = %lf, %lf rad (%lf degrees)\n",get_angle(real_num,imaginary_num),-get_angle(real_num,imaginary_num),rad_to_deg(get_angle(real_num,imaginary_num)));
		}
		else
			printf("	double root = %lf\n",root1);
	}
	return 0;
}

double get_magnitude(double re, double im)
{
	double magnitude;
	magnitude=sqrt(re*re+im*im);
	return magnitude;
}

double get_angle(double re, double im)
{
	double rad;
	rad=atan(im/re);
	return rad;
}

double rad_to_deg(double rad)
{
	double degree;
	degree=rad*180/M_PI;
	if (degree<=0)
		return degree+180;
	else
		return degree;
}