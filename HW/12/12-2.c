#include <stdio.h>

int main(void) 
{ 
	 FILE* fp;

	 fp=fopen("c12_P2in.txt","rt");
	 
	 if(fp==NULL)
	 {
		 printf("파일을 열 수 없습니다.\n");
		 return 1;
	 }

	 fclose(fp);
} 