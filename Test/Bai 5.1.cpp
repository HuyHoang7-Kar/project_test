#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int *a = (int *) malloc (n*sizeof(int));
	scanf("%d", &n);
	if( n <= 0)
	{
		printf("Error");
	}
	else 
	{
		for ( int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
	}
	int S = 0;
	for ( int i = n - 1; i >= 0; i--){
		printf("%d ", a[i]);
		S += a[i];
	}
	printf("\n%d", S);
	free(a);
	
	return 0;
}
