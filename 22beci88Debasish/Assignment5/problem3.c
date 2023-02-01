// wap to print the series of 1+7+7square+7cube+...+nth term

	#include<stdio.h>
	#include<math.h>
	int main(){
		int num,i=0, sum=0;
		printf("Enter the nth term till you want to calculate the square of seven :");
		scanf("%d", &num);
		while(i<=num)
		{
			sum = sum + pow(7,i);
			i++;

		}

		printf("The sum is %d", sum);

		return 0;
	}
