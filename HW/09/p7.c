#include <stdio.h>
#include <string.h>

char *contains_a(char *text);

int main(void)
{
	char s1[]="There is no a here";
	char s2[]="I abandoned the project";
	char s3[]="ABCDEFG";
	char *found;
	
	found=contains_a(s1);
	if(found)printf("1.%s\n",found);
	found=contains_a(s2);
	if(found)printf("2.%s\n",found);
	found=contains_a(s3);
	if(found)printf("3.%s\n",found);
	return 0;
}

char *contains_a(char *text)
{
	int i;
	char *p;
	for(i=0; i<strlen(text); i++)
	{
		if(*(text+i)=='a')
		{
			p=(text+i);
			return p;
			break;
		}
	}
	return NULL;
} 