#include <stdio.h>

void multiple(int a[], int n);

int main(void)
{
   int dan,gop,mtable[8][8]; // 변수 dan, gop과 [8][8]크기의 mtable 배열을 선언한다. 
   
   for(dan=2; dan<=9; dan++) // 2단부터 9단까지의 구구단을 가로로 출력한다.
   {
      multiple(mtable[dan-2],dan);
      printf("%d단 : ", dan);
      for (gop=2; gop<=9; gop++)
         printf("%d*%d=%-2d ",dan,gop,mtable[dan-2][gop-2]);
      printf("\n");
   }
   
   printf("---------------------------------------------------------\n");
   
   for(dan=2; dan<10; dan++) 
      printf("  %d단  ",dan);
   printf("\n");
   
   for(gop=2; gop<10; gop++) // 2단부터 9단까지의 구구단을 세로로 출력한다.
   {
      for(dan=2; dan<10; dan++)
         printf("%d*%d=%-2d ",dan,gop,mtable[dan-2][gop-2]);
      printf("\n");
   }
   return 0;
}

void multiple(int a[],int n) // a[i]={2n,3n,4n,...,7n,8n,9n}, n값을 받아서 n단 구구단 배열을 만드는 함수이다.
{
   int i;
   a[0]=n+n;
   for(i=1; i<8; i++)
   {
      a[i]=a[i-1]+n;
   }
}