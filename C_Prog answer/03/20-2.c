#include<stdio.h> 

/*
   �� ������ ������ �پ��� ���� �����մϴ�.
   �Ʒ��� �ڵ�� ��������� �ʺ��ڰ� �����ϱ� ���� �ڵ��� �����Ͽ� ������� �����帳�ϴ�.
*/

int main(void)
{
    int arr[50][50]; 
    int len, idx, i, j; 
    int s=0, w=-1, inc=1, val=0; 

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &len); 
    idx=len;

    while(1) 
	{
        for(i=0; i<idx;i++) // ���� ���� �׸� 
		{
            val++; 
            w=w+inc; 
            arr[s][w]=val;
        }
        idx=idx-1; 

        if(val==len*len) 
			break; 

        for(i=0; i<idx; i++) // ���� ���� �׸�
		{ 
            val++; 
            s=s+inc; 
            arr[s][w]=val; 
        }
        inc=inc*-1;
    }

    for(i=0; i<len; i++)  // ������ �迭 ���.  
	{ 
		for(j=0; j<len; j++) 
            printf("%5d", arr[i][j]); 
        printf("\n");
    } 

	return 0;
}
