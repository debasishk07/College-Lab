//wap to create an identity matrix Diagonals are 1 and off diagonals are zero. Take size of the matrix from user.
	#include<stdio.h>
	#define MAXROW 10
	#define MAXCOL 10
	int main(){
		int identity_matrix[MAXROW][MAXCOL];
		int i,j,r,c,identity;
		printf("Enter the rows :");
		scanf("%d", &r);
		printf("Enter the columns: ");
		scanf("%d", &c);
		
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i==j){
					identity_matrix[i][j] = 1;
				}
				else
				{
					identity_matrix[i][j] = 0;
				}
			}
		}
		printf("\n Identity matrix :\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				printf("%d\t",identity_matrix[i][j]);
			}
				printf("\n");
		
		}
			
	
	return 0;
	}
