#include<stdio.h>
#include<stdlib.h>

long GetFileSize(FILE*fp)
{
	long fpos;
	long fsize;

	fpos=ftell(fp);
	fseek(fp,0,SEEK_END);
	fsize=ftell(fp);
	fseek(fp,fpos,SEEK_SET);
	return fsize;
}

int main(void)
{
	long size;
	char name[]={0};
	FILE*fp;

	while(1)
	{
		printf("Type file name : ");
		scanf("%s",name);
	
		if((fp=fopen(name,"rt"))==NULL);
		{
			printf("File opening failed\n");
		}

		size=GetFileSize(fp);
		printf("file size = %d bytes\n\n", size);
		fclose(fp);
	}
	return 0;
}
