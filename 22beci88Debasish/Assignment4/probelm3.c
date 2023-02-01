// find the real root of the equation

	#include<stdio.h>
	#include<math.h>
	int main(){
		
		int a,b,c;

		printf("Enter the values of a,b,c : \n");
		scanf("%d %d %d", &a,&b,&c);

		if(a==0 && b==0)
	
			printf("The equation has no solution as a and b cannot be qual to 0.\n");
			
		else if(a==0)

			printf("There is only one solution.\n");

		else if(b*b - 4*a*c < 0)

			printf("There is no real roots.\n");
		
		else 
			printf("The real roots of the equation are %f and %f\n", ((-b) + sqrt(b*b - 4*a*c)/2*a) , ((-b) - sqrt(b*b - 4*a*c)));	

	
	
	
		return 0;
	
	}
