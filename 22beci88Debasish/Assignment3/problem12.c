//find the area of the triangle with conditions
	#include<stdio.h>
	#include<math.h>

	int main(){
	
		float a,b,c;
		printf("Enter the three sides of the triangle a,b,c");
		scanf("%f %f %f", &a,&b,&c);
		float p = (a+b+c)/2;

		if(a+b>c || b+c>a || a+c>b)
			{
				printf("The area of the triangle is %.2f", sqrt(p*(p-a)*(p-b)*(p-c))); 
			}
		return 0;
	}
