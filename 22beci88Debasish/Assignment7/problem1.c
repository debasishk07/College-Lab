//wap to print the pattern of stars in right angle

	#include<stdio.h>
	int main(){
		
		int n,i,j;
		printf("Enter the number of stars that you want to print");
		scanf("%d",&n);
		for(i=0;i<=n;i++){
			for(j=1;j<=2*i+1;j++){
				printf("*");
			}
			printf("\n");
		}

	
	return 0;
	}
