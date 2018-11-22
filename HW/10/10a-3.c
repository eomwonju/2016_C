#include <stdio.h>
#include <math.h>

typedef struct
{
	float re;
	float im;
}complex;

void display(complex a)
{
	if(a.im<0)
	{
		printf("%.2f - j%.2f\n",a.re,fabs(a.im));
	}
	else
		printf("%.2f + j%.2f\n",a.re,a.im);
}
void add(complex *c, complex a, complex b)
{
	c->re=a.re+b.re;
	c->im=a.im+b.im;
}
void sub(complex *c, complex a, complex b)
{
	c->re=a.re-b.re;
	c->im=a.im-b.im;
}
void mul(complex *c, complex a, complex b)
{
	c->re=a.re*b.re-a.im*b.im;
	c->im=a.re*b.im+a.im*b.re;
}

int main(void)
{
	complex a={10.f, 1.f}, b={4.f, -2.f},c;
	add(&c,a,b); display(c);
	sub(&c,a,b); display(c);
	mul(&c,a,b); display(c);
	return 0;
}