// find the electricity bill
	#include<stdio.h>
	#include<math.h>
	int main(){

		float prevbill, units, x,y,z;
		printf("Enter the previous month bill (if not enter 0)");
		scanf("%f", &prevbill);
		printf("Number of units of this month :");
		scanf("%f", &units);
		if(units>=100){
			x = (units - (units-100)) * 1.40;
			y = ((units-100)-(units-200)) * 2.50;
			z = (units - 200) * 3.20;
			printf("The bill of the month is %.2f",prevbill+x+y+z);
		}
		else if(units<100)
			printf("Your bill is %.2f", (units*1.40 + prevbill));

		return 0;



	}
