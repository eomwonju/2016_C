#include <stdio.h>
int main(void)
{
int a[3] = {5, 10, 20};
int *p1 = a, *p2 = a+2;
printf("%d, %d\n", p1 - p2, *p1 - *p2); // p1-p2=(p1의 주소값)-(p2의 주소값)=-2, *p1-*p2=a[0]-a[2]=5-20=-15
return 0;
}