#include<stdio.h>

 int strlen(char*str)
 {
	 int cnt;
	 for(cnt=0;str[cnt];cnt++);
	 return cnt;
}

 static int compare_count=0;

 int comparechar(char c1,char c2)
{
	compare_count++;
	return c1==c2;
}

 int main(void)
 {
	 char word[10];
	 int num=0;
	 char str[1000000000];
	 
	 FILE*fp=fopen("c11_q05in.txt","rt");
	 printf("Enter a word that you want to find :");
	 scanf("%s",word);
	 printf("Enter a character that you want : ");
	 scanf("%c",);
	 printf("target string <length> = %s (%d)",word,strlen(word));
	 while(fgets(str,sizeof(str),fp)!="\$")
		 num++;
	 printf("Number of input characters = %d",num);
	 printf("Compare count = %d",compare_count);
	 printf("Number of matching = %d",);
	 printf("matched position <from 0> = ");
	 
	 fclose(fp);
	 return 0;
 }