#include <stdio.h>

void multiple(int a[], int n);

int main(void)
{
   int dan,gop,mtable[8][8]; // ���� dan, gop�� [8][8]ũ���� mtable �迭�� �����Ѵ�. 
   
   for(dan=2; dan<=9; dan++) // 2�ܺ��� 9�ܱ����� �������� ���η� ����Ѵ�.
   {
      multiple(mtable[dan-2],dan);
      printf("%d�� : ", dan);
      for (gop=2; gop<=9; gop++)
         printf("%d*%d=%-2d ",dan,gop,mtable[dan-2][gop-2]);
      printf("\n");
   }
   
   printf("---------------------------------------------------------\n");
   
   for(dan=2; dan<10; dan++) 
      printf("  %d��  ",dan);
   printf("\n");
   
   for(gop=2; gop<10; gop++) // 2�ܺ��� 9�ܱ����� �������� ���η� ����Ѵ�.
   {
      for(dan=2; dan<10; dan++)
         printf("%d*%d=%-2d ",dan,gop,mtable[dan-2][gop-2]);
      printf("\n");
   }
   return 0;
}

void multiple(int a[],int n) // a[i]={2n,3n,4n,...,7n,8n,9n}, n���� �޾Ƽ� n�� ������ �迭�� ����� �Լ��̴�.
{
   int i;
   a[0]=n+n;
   for(i=1; i<8; i++)
   {
      a[i]=a[i-1]+n;
   }
}