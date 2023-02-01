// wap to find the compound intrest using functions
	#include<stdio.h>
	#include<math.h>
	

	float compint(float p, float r, float t){
		float ci;
		ci = p * (pow((1 + r/100),t));
		return ci;
	}
	
	int main(){
		float p,ti,r,CI;
		printf("Enter the principle,rate of intrest and time respectively :\n");
		scanf("%f %f %f",&p,&r,&ti);
		CI = compint(p,r,ti);
		
		printf("Compound intrest = %f",CI);
		return 0;
	}

