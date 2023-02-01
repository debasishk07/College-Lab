// Wap to find the prime numbers within a range
	#include<stdio.h>
	#include<math.h>

	int main(){
		int num,i,c,d;
		printf("Enter the starting number : ");
		scanf("%d", &c);
		printf("Enter the ending number (till you want to find the prime numbers) : ");
		scanf("%d", &num);
		printf("The prime numbers between %d And %d : ",c,num);

		while (c<num)
		{
			d = 0;
			for(i=2;i<= c/2;++i)
			{
				if(c%i == 0)
				{
					d =1;
					break;
				}
			}
			if(c==0)
				printf("%d ",c);
			++c;
		}
		printf("\n");



	return 0;
	}
