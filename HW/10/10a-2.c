#include <stdio.h>
#define PROBLEM

struct list
{
	char name, sex;
	int age;
};

typedef struct list list;//struct list�� list��� �̸��� �ο��Ѵ�.

typedef struct//sturct�� student��� �̸��� �ο��Ѵ�.
{
	char name[20], address[30];
	int age;
}student;

int main(void)
{
	list lst1={'T', 'M', 25};
	student st2={"Moon", "Seoul", 30};//sturct student st2�� student st2�� �����ؾ��Ѵ�.
	printf("�̸� = %c, ���� = %c, ���� = %d\n", lst1.name, lst1.sex, lst1.age);
	printf("�̸� = %s, �ּ� = %s, ���� = %d\n", st2.name, st2.address, st2.age);
	return 0;
}
