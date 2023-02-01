//print the values of x1 and x2

	#include<stdio.h>
	int main(){
		int a,b,c,d,m,n,x1,x2;
		printf("Enter the vlues of a,b,c,d,m,n respectively");
		scanf("%d %d %d %d %d %d", &a,&b,&c,&d,&m,&n);

		if((a*d-b*c) !=0){
			
			printf("The values of X1 is %d.", x1 =((m*d-b*n)/(a*d-c*b)));
			printf("The values of x2 is %d.", x2 =((n*a-m*c)/(a*d-c*b)));
		}
		else 
			printf("value of ad-cb cannot be equal to 0.");	

	return 0;
	}
