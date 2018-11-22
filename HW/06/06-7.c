#include <stdio.h>

char decodeMorsecode(char Morsecode)
{
	char text;
	while ( (text = fgetc(stdin)) != EOF ) { }
}

int main (void)
{
	char Morsecode;
	printf("Morse code : ");
	scanf("%s",&Morsecode);
	printf("%s",decodeMorsecode(Morsecode));
	return 0;
}