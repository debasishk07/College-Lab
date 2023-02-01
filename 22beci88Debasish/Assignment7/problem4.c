// wap to print the patterns of alphabets
	#include<stdio.h>
	int main(){
		int n,i,j;
		int ch = 65;
		printf("Enter the number : ");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			for(j=1;j<=i;j++){
				printf("%c",'A'-1+i);
			}
			printf("\n");
		}
	
		

	return 0;
	}
