// wap to find the odd number,even num, positive num,negative num, present in an array

	#include<stdio.h>
	int main(){
		int a[8],i;
		printf("Enter 8 elements : \n");
		for(i=0;i<8;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<8;i++){
			if(a[i]%2 ==0)

				printf("\na[%d] is even",i);
			else
				printf("\na[%d] is odd",i);
			if(a[i] <0)
				printf("\na[%d] is negative",i);
			else
				printf("\na[%d] is positive",i);
		}


	return 0;
	}
