#include <stdio.h>
#include <math.h>


int main(void)

{
	int n;
	double r,pi=0;

	for(n=0; n<10000000000; n++)
		pi+=(4*pow(-1.00,n))/(2*n+1);

	printf("area of circle with radious = ");
	scanf("%lf",&r);
	printf("3.140000 ~> %.16f\n",3.14*r*r);
	printf("3.141592 ~> %.16f\n",3.141592*r*r);
	printf("good pi ~> %.16f\n",pi*r*r);
	return 0;
}