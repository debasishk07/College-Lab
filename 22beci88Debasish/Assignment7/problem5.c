// wap to print the pyramid of stars
	#include<stdio.h>
	#include<math.h>
	int main(){
		int m,n,i,j,k;
		int ch='A'; 
		printf("Enter the number : ");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			for(j=n;j>=i;j--)
				printf(" ");
			
			for(k=1;k<=i;k++)
				printf("%c",ch++);
				ch--;
			
			for(m=1;m<i;m++)
				printf("%c",--ch);
			
			printf("\n");
		}



	return 0;
	}
