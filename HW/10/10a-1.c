#include <stdio.h>

struct list
{
	char name, sex;
	int age;
};

int main(void)
{
	struct list st1={'T','M',25};//����ü ������ ������ �� �� �տ� struct ������ �߰��ؾ��Ѵ�.
	printf("�̸� = %c, ���� = %c, ���� = %d\n",st1.name,st1.sex,st1.age);//����ü ������ ����� ������ ���� ����ü ������ �̸�.����ü ����� �̸��� �������� �����ؾ� �Ѵ�.
	return 0;
}