// wap to print the following pattern of alphabets
	#include<stdio.h>
	int main(){
		int i,j,n;
		printf("Enter the number of rows : ");
		scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%c", 'A'-1 + i);
			}
			printf("\n");
		}
	return 0;
	}
