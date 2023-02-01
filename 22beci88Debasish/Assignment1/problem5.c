// convert celcius to fehrenheit
#include<stdio.h>
int main()
	{
	float celcius,fehrenheit;
	printf("Enter the temperature in Celcius :");
	scanf("%f", &celcius);

	fehrenheit = (celcius * 1.8 + 32);

	printf("The temperature is %.2f\n", fehrenheit);
	
	printf("Enter the temperature in Fehrenheit : ");
	scanf("%f", &fehrenheit);

	celcius = (fehrenheit - 32) /1.8;
	printf("The temperature in celcius is %.2f\n", celcius);

	return 0;
	}
