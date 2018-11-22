#include <stdio.h>

struct list
{
	char name, sex;
	int age;
};

int main(void)
{
	struct list st1={'T','M',25};//구조체 변수를 선언할 때 맨 앞에 struct 선언을 추가해야한다.
	printf("이름 = %c, 성별 = %c, 나이 = %d\n",st1.name,st1.sex,st1.age);//구조체 변수의 멤버에 접근할 때는 구조체 변수의 이름.구조체 멤버의 이름의 형식으로 접근해야 한다.
	return 0;
}