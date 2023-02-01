// Find the vlue of S (Distance)

#include<stdio.h>
#include<math.h>
	int main(){
	
	float u,a,t;

	printf("Enter the Initial speed u : ");
	scanf("%f", &u);

	printf("Enter the Acceleration a : ");
	scanf("%f", &u);

	printf("Enter the Time T in hours : ");
	scanf("%f", &t);
	
	float s = u*t + ((1/2) * a * t * t);

	printf("The value of the Distance is : %.2f", s);

	return 0 ;


	}
