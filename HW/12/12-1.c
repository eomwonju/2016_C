#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PI 4*atan(1.)

typedef struct
{
	double re;
	double im;
	double mag;
	double rad;
}complex;

void display(char*str,complex a)
{
	if(str)printf("%s",str);
	if(a.im<0)
	{
		printf("%.2f-j%.2f",a.re,fabs(a.im));
	}
	else
		printf("%.2f+j%.2f",a.re,a.im);
	printf("=%.2f/_j%.2f\n",a.mag,(a.rad/PI)*180);
}

void add(complex *c,complex a,complex b)
{
	c->re=a.re+b.re;
	c->im=a.im+b.im;
}

void sub(complex *c,complex a,complex b)
{
	c->re=a.re-b.re;
	c->im=a.im-b.im;
}

void mul(complex*c,complex a,complex b)
{
	c->re=a.re*b.re-a.im*b.im;
	c->im=a.re*b.im+a.im*b.re;
}

void get_polar_form(complex *c,complex a)
{
	c->mag=sqrt((a.re*a.re)+(a.im*a.im));
	c->rad=atan2(a.im,a.re);
}
void get_cart_form(complex *c,complex a)
{
	c->mag=sqrt((a.re*a.re)+(a.im*a.im));
	c->rad=atan2(a.im,a.re);
}

int main(void)
{
	complex a={10.,2.}, b={4.,-2.},c;
	display(NULL,a);
	get_polar_form(&c,a); display("a=",a);
	get_polar_form(&c,b); display("a=",b);
	add(&c,a,b); display("a+b=",c);
	sub(&c,a,b); display("a-b=",c);
	mul(&c,a,b); display("a*b=",c);
	return 0;
}