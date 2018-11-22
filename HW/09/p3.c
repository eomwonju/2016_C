#include <stdio.h>

int SumArray1(int *p, int n);
int SumArray2(int *p, int n);

int main(void)
{
	int i;
	int a[ ] = {10, 5, 15, 25, 7};
	printf("1. %d\n", SumArray1(a,5));//result=10+5+15+25+=62
	printf("2. %d\n", SumArray2(a,5));//result=10+11+12+13+14=60, SumArray2 �Լ����� p[0]=15�� �����.
	printf("3. %d, %d\n", SumArray1(a,5), SumArray2(a,5));// SumArray2 result=15+16+17+18+19=85, p[0]=20���� �����. SumArray1 result=20+5+15+25+7=72
	printf("4. %d, %d\n", SumArray2(a, 5), SumArray1(a, 5));//SumArray1 result=20+5+15+25+7=72, SumArray2 result=20+21+22+23+24=110
	return 0;
}

int SumArray1(int* p, int n)
{
	int result = 0, i;
	for(i=0 ; i<n ; i++)
		result += p[i];
	return result;
}

int SumArray2(int* p, int n)
{
	int result = 0, i;
	for(i=0 ; i<n ; i++)
		result += (*p)++;//(*p)++�� *p++�� �ǹ̰� �ٸ���. (*p)�� p�� ����Ű�� ���� ���� ���� �Ŀ� 1��ŭ ������Ű��� �ǹ��̴�.
		return result;
}