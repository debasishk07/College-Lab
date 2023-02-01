// calculate the compound intrest
#include<stdio.h>
#include<math.h>
	int main(){
			float P, R, T, n, FV, CI;

			printf("Enter the Principal amount : ");
			scanf("%f", &P);

			printf("Enter the Intrest rate : ");
			scanf("%f", &R);

			printf("Enter the Time (in Years) : ");
			scanf("%f", &T);

			printf("Enter the Number of times that you are getting intrest per year :");
			scanf("%f", &n);

			CI =  ( 1 + (R/n) );
			
			//pow = n*T;

			FV =(P) * pow(CI,(n*T));
		

			printf("The Compound intrest is %.2f", FV);

			return 0;

	}
