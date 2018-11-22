#include<stdio.h>

int main(void)
{
	typedef struct
	{
	int ID;
	int scores[3];
	double average;
	int favorite;
	}STUDENT;
	
	STUDENT arr[]={{11087,{85,7,35}},{16056,{65,87,77}},
	{11799,{53,67,90}},{11153,{100,30,87}},{8420,{72,53,64}}};
	
	SUBJECTk;
	
	char*subj[]={"KOR","ENG","MAT"};
	
	typedef enum *subj
	{
	};
	
	printf("%-7s","ID");
	
	for(k=KOR;k<=MAT;k++)
		printf("%7s",subj[k]);
	
	printf("%7s %12s\n","AVG","favorite");
	
	for(i=0;i<N;i++)
	{
		printf("%-7d",arr[i].id);
		for(k=KOR;k<=MAT;k++)printf("%7d",arr[i].score[k]);
		printf(" %7.2lf %9s\n",arr[i].avg,subj[arr[i].subj]);
	}
	printf("%-10s","AVG");
	for(k=KOR;k<=MAT;k++)printf("%7.2lf",avg[k]);
	printf("\n");
	return 0;
}