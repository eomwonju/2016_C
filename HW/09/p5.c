#include <stdio.h>

void sort3(int *a, int *b, int *c)
{
	int i;
	if(*a>*b)
	{
		i=*a;
		*a=*b;
		*b=i;
	}
	
	if(*b>*c)
	{
		i=*b;
		*b=*c;
		*c=i;
	}

	if(*a>*b)
	{
		i=*a;
		*a=*b;
		*b=i;
	}
}

int main(void)
{
int x, y, z;
x = 10, y = 5, z = 3;
sort3(&x, &y, &z);
printf("x = %d, y = %d, z = %d\n", x, y, z);
x = 3, y = 10, z = 5;
sort3(&x, &y, &z);
printf("x = %d, y = %d, z = %d\n", x, y, z);
return 0;
}
