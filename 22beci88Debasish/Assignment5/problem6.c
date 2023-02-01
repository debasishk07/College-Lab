//wap to check a given number is armstrong's number or not

	#include<stdio.h>

	int main() {

		int num, r, sum=0,temp;
		printf("Enter the number");
		scanf("%d",&num);

		for(temp=num; num!=0; num = num/10){
			r = num%10;
			sum= sum +(r*r*r);
		}

		if(sum == temp)
			printf("The number is armstrong's number");
		
		else
			printf("The number is not armstrong's number");
		
		return 0;
	}
