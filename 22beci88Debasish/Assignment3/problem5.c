// wap to test the given number is divisible by 11 and 13
	
	#include<stdio.h>
	int main(){

		int a;
		printf("Enter the number : ");
		scanf("%d", &a);

		if(a%11==0 && a%13==0)
		{
			printf("The number is divisible by 11 and 13.");
		}

		else
			printf("The number is not divisible by both 11 and 13.");



		return 0;
	}
