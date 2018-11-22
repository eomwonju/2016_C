#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE*fp1,*fp2;
	char name1[]={0};
	char name2[]={0};

	while(1)
	{
		printf("Type first file name : ");
		scanf("%s",name1);
		if(name1=="q")
			exit(1);
		printf("Type first file name : ");
		scanf("%s",name2);
		if(name2=="q")
			exit(1);
		fp1=fopen(name1,"rt");
		fp2=fopen(name2,"rt");
		
		if()
			printf("They are different\n\n");
		else
			printf("They are same\n\n");

		fclose(fp1);
		fclose(fp2);
	}
	
	return 0;
}