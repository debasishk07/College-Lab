//calculate the simple intrest

#include<stdio.h>
#include<math.h>
	int main(){
		
		float P,R,T;
		printf("Enter the Principal amount : ");
		scanf("%f", &P);
		printf("Enter the Intrest rate per anum : ");
		scanf("%f", &R);
		printf("Enter the Time (in Years) : ");
		scanf("%f", &T);

		float SI = (P * R * T)/100;

		printf("The Simple intrest is %.2f", SI);

		return 0;


	}
