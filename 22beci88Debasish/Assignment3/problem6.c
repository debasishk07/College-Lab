// wap to check the validity of a triangle if the three sides are given.
	
	#include<stdio.h>
	int main(){
		
		int a,b,c;
		printf("Enter the three sides of the triangle a,b,c respectively : ");
		scanf("%d %d %d", &a,&b,&c);

		if(a+b>c || a+c>b || b+c>a)
		{
			printf("The triangle is valid.\n");
		}
		else 
			printf("The triangle is invalid.\n");

		return 0;

	}
