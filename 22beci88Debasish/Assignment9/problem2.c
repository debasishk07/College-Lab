// wap to make upper triangular values of matrix zero
   	#include<stdio.h>
	int main() {
   	int rows, cols, r, c, matrix[10][10];
   	printf("Please enter the number of rows for the matrix: ");
   	scanf("%d", &rows);

   	printf("Please enter the number of columns for the matrix: ");
   	scanf("%d", &cols);

   	printf("Please enter the elements for the Matrix: ");
   	for(r = 0; r < rows; r++){
      		for(c = 0;c < cols;c++){
         		scanf("%d", &matrix[r][c]);
      			}
   	}
   	printf(" \nThe Lower Triangular Matrix is: \n");
  		 for(r = 0; r < rows; r++){
    
      		 for(c = 0; c < cols; c++){
      			if(r >= c){
         		printf("%d\t ", matrix[r][c]);
      			}
      			else{
         		printf("0");
         		printf("\t");
      			}
   		}
		 printf("\n");
	}

	return 0;
	}

