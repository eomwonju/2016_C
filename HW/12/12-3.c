#include <stdio.h>

int main(void) 
{ 
	 FILE* fp;

	 fp=fopen("c12_hw3in.txt","rt");
	 
	 if(fp==NULL)
	 {
		 printf("������ �� �� �����ϴ�.\n");
		 return 1;
	 }

	 fclose(fp);
} 