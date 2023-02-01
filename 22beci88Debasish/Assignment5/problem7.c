// wap to test wheather a given number is prime number or not
	#include<stdio.h>
	int main(){
		int num,i=1,c=0;
		printf("enter the number :");
		scanf("%d", &num);

		while(i<=num)
		{
			if(num%i==0)
				c++;
				i++;
		}

		if(c==2)
			printf("The number is  prime");
		else 
			printf("The number is not a prime number");






	return 0;

	}
