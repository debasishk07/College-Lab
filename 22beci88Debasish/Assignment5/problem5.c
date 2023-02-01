// wap to compute the sum of the digits of a given integer

	#include<stdio.h>
	#include<math.h>
	int main(){
		int n,m, sum=0;
		printf("Enter the number :");
		scanf("%d", &n);

		while(n>0)
		{
		       	m = n % 10;
		  	sum = sum + m;
		  	n = n/10;
		}

		printf("The sum of the digits is %d", sum);


		return 0;



	}
