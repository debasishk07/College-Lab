// wap to print the number of days of a month if a month number and year is given

	#include<stdio.h>
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	void daysinmonth(int m);
	int main()
	{
		int m;
		printf("Enter the month number ");
		scanf("%d", &m);

		daysinmonth(m);
	return 0;
	}

	void daysinmonth(int m){
		
		if(m>12 || m<1)
		{
			printf("Invalid input ");
			}
		else if(m==2)
			printf("Number of days in month 2 is either 28 or 29");

		else 
			printf("Number of days in a month %d is %d", m,a[m-1]);
	}
