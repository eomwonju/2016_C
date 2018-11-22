#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]={0};
	int count[]={strlen(str)};
	int i=0;
	static int cnt=0;

	printf("Enter numbers : ");
	scanf("%s",&str);
		
	for(i=0; i<strlen(str); i++)
		count[str[i]-48]++;
			
	for(i=0; i<strlen(str); i++)
	{
		if(count[i]==1)
			cnt++;
	}
		
	if(cnt==10)
		printf("Result : yes\n");

	else
		printf("Result : no\n");
	
	return 0;
}