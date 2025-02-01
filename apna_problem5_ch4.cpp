#include<stdio.h>

int main()
{
	printf("\t MULTIPLICATION TABLE CALCULATOR \n");
   int n;
   printf("\nEnter The Table Number: ");
   scanf("%d", &n);
	for( int i = 1 ; i<=10 ; i++ ){
		printf("%d  \n", n * i);
	}
	
	return 0;
}
