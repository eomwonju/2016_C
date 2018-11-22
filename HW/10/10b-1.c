#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE*fp;
	int n;

	fp=fopen("c10_e03bin.txt","rb");
	fread(&n, sizeof(int), 1, fp);
	fclose(fp);

	printf("%d\n",n);
	return 0;
}
