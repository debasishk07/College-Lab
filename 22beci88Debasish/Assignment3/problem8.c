//wap to round up a given floating point to integer by considering the floor and celing operation.

	#include<stdio.h>
	int main(){
	
		float a;
		printf("Enter the floating point number : ");
		scanf("%f", &a);
		
		int b = a;
		printf("The floor value is %d", b);

		int c = ++b;

		printf("The celing value is %d.", c);

		return 0;

	}
