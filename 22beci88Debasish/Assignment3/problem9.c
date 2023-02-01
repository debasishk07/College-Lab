//wap to check the given program is pallindrome or not

		#include<stdio.h>
		int main(){
			
			int num;
			printf("Enter the three digit number : ");
			scanf("%d", &num);
			int x,y,z;
			x = num % 10;
			y = (num / 10 ) % 10;
			z = num / 100;
			int num2 =( x*100 + y*10 + z*1 );
			if(num==num2){

				printf("The number is pallindrome.");

			}

			else 
				printf("The number is not a pallindrome.");


		return 0;
		}
