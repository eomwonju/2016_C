#include <stdio.h>
#define N 5
int main(void)
{
 int a[ ] = {1, 2, 3, 4, 5}, i;
 int* p = a;
 for(i=0 ; i<N ; i++) printf("%d ", a[i]); // (1) �迭��� ÷��(index) ���
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", p[i]); // (2) �迭�����ּҿ� ÷�� ���
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", *(a+i)); // (3) �����Ϳ� ÷�� ��� I (�迭��������)
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", *(p+i)); // (4) �����Ϳ� ÷�� ��� II (�����Ϳ���)
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", *p++); // (5) ������ ���� �̿�
 printf("\n");
 return 0;
}