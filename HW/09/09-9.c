#include <stdio.h>

void sequence_print1(int i, int *j) {
	int k, l, m;
	
	if (i % 2 == 1) {
		for (k = 2 * i - 1; k > 0; k--) {
			l = ((*j)++ % 10);
			if (l == 0) {
				l = 1;
				(*j)++;
			}
			printf("%d", l);
		}
	}
	if (i % 2 == 0) {
		for (k = 2 * i - 1; k > 0; k--) {
			l = ((*j)++ % 10);
			if (l == 0) {
				l = 1;
				(*j)++;
			}
		}
		m = --(*j);
		for (k = (2 * i) - 1; k > 0; k--) {
			l = (m % 10);
			m--;
			if (l == 0) {
				l = 9;
				m--;
			}
			printf("%d", l);
		}
		(*j)++;
	}
}

void sequence_print2(int i, int *j) {
	int k, l, m;
	if (i % 2 == 0) {
		for (k = 2 * i - 1; k > 0; k--) {
			l = ((*j)++ % 10);
			if (l == 0) {
				l = 1;
				(*j)++;
			}
			printf("%d", l);
		}
	}
	if (i % 2 == 1) {
		for (k = 2 * i - 1; k > 0; k--) {
			l = ((*j)++ % 10);
			if (l == 0) {
				l = 1;
				(*j)++;
			}
		}
		m = --(*j);
		for (k = (2 * i) - 1; k > 0; k--) {
			l = (m % 10);
			m--;
			if (l == 0) {
				l = 9;
				m--;
			}
			printf("%d", l);
		}
		(*j)++;
	}
}

void space_print(int i, int n)
{
	int j;
	for (j = (n + 1) / 2 - i; j>0; j--)
		printf(" ");
}

int main(void)
{
	int n, i, j = 1;
	while (1)
	{
		printf("Enter the number of lines <1,2,3, ...> : ");
		printf("");
		scanf("%d", &n);
		if (n>0)
			break;
	}

	for (i = 1; i<(n + 1) / 2 + 1; i++)
	{
		space_print(i, n);
		sequence_print1(i,&j);
		printf("\n");
	}

	if (n % 2 == 1)
	{
		for (i = (n - 1) / 2; i>0; i--)
		{
			space_print(i, n);
			sequence_print1(i,&j);
			printf("\n");
		}
	}

	else
	{
		for (i = n / 2; i>0; i--)
		{
			space_print(i, n);
			sequence_print2(i,&j);
			printf("\n");
		}
	}

	return 0;
}