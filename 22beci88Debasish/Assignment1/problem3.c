//print the area of the circle
#include<stdio.h>
	int main()
		{
		
		int radius;

		printf("Enter the radius of the circle : ");
		scanf("%d", &radius);

		int area = (2 * 3.1415 * radius);

		printf("The area of the circle is : %d", area);
			
		return 0;

		}
