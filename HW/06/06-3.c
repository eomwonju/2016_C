#include<stdio.h>

int main(void)
{
    int start,end,a,b,i,value,sum=0;
    int arr[100];

    printf("Enter range start and end : ");
    scanf("%d%d",&start,&end);

    for(i=start; i<end+1; i++)
	{
        b=i;
        value=1;
        while(b>0)
		{
			a=b%10;
            b=b/10;   
            value=value*a;
        }
        arr[i]=value;
        sum+=value;
    }

    for(i=start; i<end; i++)
        printf("%d + ",arr[i]);

    printf("%d = %d \n",arr[end],sum);
}