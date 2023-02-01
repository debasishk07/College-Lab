// wap to find the minimum and maximum and average of an array
#include<stdio.h>
int main(){
	int a[8],i,l,g,s=0;
	float avg;

	printf(" Enter 8 numbers :\n");

	for(i=0;i<8;i++){

		scanf("%d",&a[i]);
		s=s+a[i];
		avg = s/8.0;
	}

	printf("Average is %.2f\n", avg);
	g = a[0];

	for(i=0;i<8;i++)
		if(a[i]>g)
		g=a[i];
		printf("Greatest number is %d\n",g);
		l = a[0];
		for(i=0;i<8;i++)
			if(a[i]<i)
			 l = a[i];
		printf("Lowest number is %d\n",l);
return 0;
}
