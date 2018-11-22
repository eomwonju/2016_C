#include <stdio.h>
#define NUM_CITES 12

static const char timezone_names_summer[][2][32]=
{
	{ "Honolulu", "HST" },
	{ "SanFrancisco", "PDT" },
	{ "Denver", "MDT" },
	{ "Chicago", "CDT" },
	{ "NewYork", "EDT" },
	{ "Santiago", "CLST" },
	{ "London", "BST" },
	{ "Vienna", "CEST" },
	{ "Singapore", "SGT" },
	{ "Seoul", "KST" },
	{ "Sydney", "AEST" },
	{ "Auckland", "NZDT" }
};

static int time_offset[]={-10,-7,-6,-5,-4,-3,1,2,8,9,10,13};

int is_number(char c)
	//returns 0 if c is not digit character
{}

int string_to_number(char s[], int n)
	//return decimal number written in s[0]~s[n-1]
	//ex) s="1234", n=2~~>return 12
{}

int is_same_string(const char s1[], char s2[])
	//return 1 if s1 and s2 are same
{}

int main(void)
{
	char UCTtime[6]={0},Cityname;

	printf("The accepted time format is HH:MM.\n");
	printf("	     For example, 22:43\n");
	printf("Current time in UTC? ");
	scanf("%s",&UCTtime);

	//입력에 오류가 있으면 오류 메세지를 출력하고 종료

	printf("Current time is %c%c hours %c%c minutes",UCTtime[0],UCTtime[1],UCTtime[3],UCTtime[4]);
	printf("The available city names are\nCity name? ");
	printf("		Honolulu Sanfrancisco Denver Chicago\n");
	printf("		NewYork Santiago London Vienna\n");
	printf("		Singapore Seoul Sydney Auckland\n");
	printf("City name? ");
	scanf("%s",&Cityname);

	//입력에 오류가 있으면 오류 메세지를 출력하고 종료

	printf("New time : %  hours % minutes <% day>",);//미완성

	return 0;
}
