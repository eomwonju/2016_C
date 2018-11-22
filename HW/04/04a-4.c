#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   int a[10][20],arr[20],n[10],i,j,s,t;
   double avg,tot,total,q,avg2;

   srand((unsigned)time(NULL));

   printf("--------------------------------------------------------\n");
   printf("Á¤´ä : ");
   for (s=0;s<20;s++)
   {
      arr[s]=rand()%(4)+1;
      printf("%d ",arr[s]);
   }
   printf("\n--------------------------------------------------------\n");

   total=0;
   for(i=0;i<10;i++)
   {
      printf("%d : ",IDgen(i));
      for (t=0;t<20;t++)
      {
         a[i][t]=rand()%(4)+1;
         printf("%d ",a[i][t]);
      }
      printf("\n");
   }

   printf("\n--------------------------------------------------------\n");
   for (i=0,tot=0;i<10;i++)
   {
      printf("%d : ",IDgen(i));
      for (j=0,q=0,tot=0;j<20;j++)
      {
         if (arr[j]==a[i][j])
         {
            printf("O ");
            tot+=5.0;
         }
         else
         {
            printf("X ");
         }
      }
      printf("tot = %.2f\n",tot);
      total+=tot;
   }
   printf("--------------------------------------------------------\n");
   avg2=total;
   avg=avg2/10;
   printf("total=%.2f,      avg=%.2f",total,avg);
}

int IDgen(int j)
{
   int n[10];
   int i;
   srand((unsigned)time(NULL));
   for (i=0;i<10;i++)
      n[i]=rand()%(20)+101;
   return n[j];
}
