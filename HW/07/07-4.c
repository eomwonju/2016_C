#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int search_count=0;

int comparenum(int guess, int answer)
{
	search_count++;
	printf("Guess %d : %d\n",search_count,guess);
	if(guess<answer)
		return -1;
	else if(guess>answer)
		return 1;
	else return 0;
}

int main(void)
{
	int answer=0,i,guess;
	
	printf("Answer [1,1000]? ");
	scanf("%d",&answer);
	guess=rand()%1000+1;
	srand((unsigned)time(NULL));
	
	switch (comparenum(guess,answer))
	{
	case -1:
		guess=rand()%(1000-guess)+guess;
	case 1:
		guess=rand()%guess+1;

	case 0:
		printf("Found answer %d guesses",search_count);
	}
	return 0;
}