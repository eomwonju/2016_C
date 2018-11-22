#include <stdio.h>

void tohex(int);

int main(void)
{
	int x;

	while(1)
	{
	printf("Type a positive decinal : ");
	scanf("%d",&x);
	if(x<0)
		break;
	printf("hexadecimal number = ");
	tohex(x);
	printf("\n");
	}
	return 0;
}

void tohex(int x)
{
	int div=x/16;
	int mod=x%16;
	if(div>0)
		tohex(div);
	if(mod>9)
		printf("%c",'A'+mod-10);
	else
		printf("%d",mod);
}