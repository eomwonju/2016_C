#include <stdio.h>
#define N 5
int main(void)
{
 int a[ ] = {1, 2, 3, 4, 5}, i;
 int* p = a;
 for(i=0 ; i<N ; i++) printf("%d ", a[i]); // (1) 배열명과 첨자(index) 사용
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", p[i]); // (2) 배열시작주소와 첨자 사용
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", *(a+i)); // (3) 포인터와 첨자 사용 I (배열원소참조)
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", *(p+i)); // (4) 포인터와 첨자 사용 II (포인터연산)
 printf("\n");
 for(i=0 ; i<N ; i++) printf("%d ", *p++); // (5) 포인터 증감 이용
 printf("\n");
 return 0;
}