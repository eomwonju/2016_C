
# include <stdio.h>

int main(void)
{
	FILE*fp=fopen("c11_hw3in.txt","r+");
	char c;

	if(fp==NULL)
	{
		printf("���� ���⸦ �����Ͽ����ϴ�\n");
		return 0;
	}

	while((c=fgetc(fp))!=EOF)
	{
		if(97<=c&&c<=122)
		{
			fseek(fp,-1,SEEK_CUR);
			fputc(c-32,fp);
			fseek(fp,0,SEEK_CUR);
		}
	}
	fclose(fp);
}