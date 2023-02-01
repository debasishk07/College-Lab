// wap to compute the sum of square of 1st n natural numbers

	#include<stdio.h>
	#include<math.h>
	int main(){

		int num,i,sum=0;

		printf("Enter the number till you want to calculate the square.");
		scanf("%d",&num);

		for(i=1;i<=num;i++)

		{
			sum = sum + pow(i,2);

		}
		printf("The sum is sum %d\n",sum);
	return 0;

	}
