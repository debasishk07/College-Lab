//find the sum and the average

#include<stdio.h>
int main()
	{
	 int a,b, sum, avg;
	 
	 printf("Enter the first number :");
	 scanf("%d", &a);
	 printf("Enter the second number :");
	 scanf("%d", &b);

	 sum = a+b;
	 avg = (a+b)/2;

	 printf("The sum is %d \n", sum);
	 printf("The average is %d\n", avg);

	 return 0;
	
	
	}
