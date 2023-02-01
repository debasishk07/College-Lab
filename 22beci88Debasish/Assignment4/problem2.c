//check the triangle is isoscales, equilateral, right-angled triangle
#include<stdio.h>
#include<math.h>
	int main(){

		float a,b,c;
		printf("Enter the three sides of the triangle a,b,c");
		scanf("%f %f %f", &a,&b,&c);
		if(a+b>c && a+c>b && b+c>a){

			printf("The triangle is valid\n");
			
			if(a==b || b==c || a==c)
			{
				printf("The triangle is isoscales\n");
			}
			else if(a==b && b==c){
				
				printf("The triangle is quadrilateral\n");
			}
			else if(a == sqrt(b*b+c*c) || b == sqrt(a*a + c*c) || c == sqrt(b*b + a*a))
				
				printf("The triangle is Right angled\n");

			else if(a!=b && b!=c)

				printf("The triangle is a Scalar triangle\n");
		
			}
		else 
			printf("The triangle is invalid\n");

		return 0;

	}

