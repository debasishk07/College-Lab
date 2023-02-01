// Write a program to find the volume of the sphere
#include<stdio.h>
#include<math.h>
	int main(){	
			float radius;
			printf("Enter the Radius of the sphere : ");
			scanf("%f", &radius);

			float volume =( (4/3) * 3.1415 * radius * radius * radius) ;

			printf("The volume of the sphere is %.2f", volume);

			return 0;


	}
