//Wap to compute 1+2+3+4+5+.....+n

		#include<stdio.h>
		int main(){

			int num, i=1 , sum = 0;
			printf("Enter the number till you want to calculate the sum : ");
			scanf("%d", &num);

			while(i<=num)
			{
				sum = sum + i;
			        i++;

				}

			printf("The sum is %d.\n", sum);

		  return 0;

		}
