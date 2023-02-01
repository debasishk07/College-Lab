//largest among two numbers

	#include<stdio.h>
	int main(){

		int a,b;
		printf("Enter the first number a :");
		scanf("%d", &a);
		printf("Enter the second number b :");
		scanf("%d", &b);

		if(a>b) { 
			printf("The first number a is largest and b is smallest\n");
		}
		else 
			printf("The second number b is largest and a is smallest\n");

		return 0;

	}
