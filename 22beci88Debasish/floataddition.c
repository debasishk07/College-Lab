#include<stdio.h>
int main()

	{ 
		float x,y,sum;

		printf("Input the first number :");
		scanf("%f", &x);

		printf("Input the second number :");
		scanf("%f", &y);

		sum = x+y;

		printf("The sum is %.2f", sum);
		
		return 0;
	}
