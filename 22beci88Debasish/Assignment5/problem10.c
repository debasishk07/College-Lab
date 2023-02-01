// wap to find a number which is divisible by sum of its digits between 1 to 10000

	#include<stdio.h>
	int main(){
		int i,x,sum,num;
		for(i=2;i<10000;i++){
			x=i;
			while(x>0){
				sum = num +(x%10);
				x = x/10;
			}
			if(i%sum == 0)
				printf("%d\t",i);
		}
		return 0;
	}
