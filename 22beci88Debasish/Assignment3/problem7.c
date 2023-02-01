// wap to ecaluate the expression x= (a-b)/(c-d) and give en error message when c is equal to d

	#include<stdio.h>
	int main(){

		int a,b,c,d,x;
		printf("Enter the four numbers a,b,c,d respectively :");
		scanf("%d %d %d %d", &a,&b,&c,&d);

		if(c!=d){
		       	printf("The value of the expression is %d\n",x=(a-b)/(c-d));
		}
		else 
			printf("Error c cannot be equal to d.\n");
		
		return 0;	

	}
