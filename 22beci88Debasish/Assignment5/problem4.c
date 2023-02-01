// wap to compute factorial of a num
	#include<stdio.h>
	#include<math.h>
	int main(){
		
		int i,num,fact=1;
		printf("Enter the number you want to calculate the factorial :");
		scanf("%d", &num);
		for(i=1;i<=num;i++)
		{
			fact = fact*i;
			
		}

		printf("The factorial of the number is %d\n", fact);

		return 0;
	
		}
