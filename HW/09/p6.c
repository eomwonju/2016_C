#include <stdio.h>

void RevChar(char *s)
{
	int count=0,i,j,k;
	for(i=0; i<100; i++)
	{
		if(*(s+i)=='\0')
			break;
		else
			count++;
	}
	
	for(j=0; j<count/2; j++)
	{
		k=*(s+j);
		*(s+j)=*(s+count-j-1);
		*(s+count-j-1)=k;
	}
	
}
int main(void)
{
char s[100];
printf("IN string : ");
scanf("%s", s);
RevChar(s);
printf("OUT string : %s\n", s);
return 0;
}