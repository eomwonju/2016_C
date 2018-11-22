#include<stdio.h>
#include<stdlib.h>

 struct students
 {
	 char name[40];
	 char address[40];
	 int age;
 };

 typedef struct students student;

 int main(void)
{
	int i;
	char *name = "c10_e04.txt";
	FILE* fp1;
	student st1[] = {{"홍길동", "서울", 30},{"이순신", "통영", 56}},st2;
	
	if((fp1 = fopen(name, "w")) == NULL)
	{
		printf("File(W) opening failed\n");
		exit(1);
	}
	
	for(i=0; i<2; i++)
	{
		fprintf(fp1, "%s %s %d\n", st1[i].name, st1[i].address, st1[i].age);
	}
	fclose(fp1);
	
	if((fp1 = fopen(name, "r")) == NULL)
	{
		printf("File(R) opening failed\n");
		exit(1);
	}
	
	for(i=0; i<2; i++)
	{
	fscanf(fp1, "%s %s %d", st2.name, st2.address, &st2.age);
	printf("name = %s, address = %s, age = %d\n", st2.name, st2.address, st2.age);  
	}
	fclose(fp1);
	return 0;

}