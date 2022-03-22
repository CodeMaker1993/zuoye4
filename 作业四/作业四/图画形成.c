#include<stdio.h>

int main()
{
	int a; 
	int b=0;
	int c=0;
	int k=0;
	int i;
	scanf_s("%d" , &a);//ÊäÈëĞĞÊı
	for (i = 0; i < a; i++)
	{
		for (k = 0; k  <= a-i-1; k++) { printf(" "); }
		
		for (b = 0; b <2*i+1; b++) {
			printf("*");

		}
		printf("\n");
	}

	for (i = a+1;  i < 2 * a; i++) 
	{
		c += 2;
		for(k = 0;k<=i-a;k++) { printf(" "); }

		for (b= 0; b<= 2*a-c-2; b++) { printf("*"); }

		printf("\n");
	}
		

	 

	return 0;
}