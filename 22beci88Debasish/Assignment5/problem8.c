// wap to print the n fibonacci numbers
	#include<stdio.h>
	int main(){

		int n1=0,n2=1,n3,num,i;
		printf("Enter the number till you want to calculate the fibonacci series");
		scanf("%d", &num);
		printf("%d %d ", n1, n2);

		for(i=2;i<num;++i)
		{
			n3=n1+n2;
			printf("%d ",n3);
			n1=n2;
			n2=n3;
		}


	return 0;
	}
