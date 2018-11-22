#include <stdio.h>
#define N 3
void CompArray(int *a, int *b, int *c, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(*(a+i)<=*(b+i))
			c[i]=0;
		else
			c[i]=1;
	}
}

int main(void)
{
int a[N] = {5, 6, 9}, b[N] = {4, 8, 10};
int i, c[N];
CompArray(a, b, c, N);
for(i=0 ; i<N ; i++)
printf("c[%d] = %d\n", i, c[i]);
return 0;
}
