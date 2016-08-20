#include <stdio.h>

int bin_coefficient(int n, int k)
{
	int x = 1;
	for (int i = 1; i <= k; x = x*(n--) / (i++));
	return x;
}

int main()
{	
	int n;
	printf("Your number?:\n");
	scanf("%d", &n);
	for (int i = 0,row=1; i < n; i++,row++){
		for (int j = 0; j < n-row; j++) printf("  ");
		for (int k = 0; k < row; k++) printf("%4d", bin_coefficient(i, k));
		printf("\n\n");
	}
	return 0;
}