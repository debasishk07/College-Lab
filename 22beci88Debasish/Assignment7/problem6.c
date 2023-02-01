// wap to print the following pattern
	#include<stdio.h>
	int main(){
		int i,j,k,n;
		printf("Enter the number : ");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			for(k=1;k<=2*i-1;k++){
				printf(" ");
			}
			for(j=n;j>=i;j--){
				printf("%d",i);
			}
			printf("\n");
		}


	return 0;
	}
