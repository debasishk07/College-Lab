// wap to update the content of an array when element value is given
	#include<stdio.h>
	int main(){
		int i,size,x,pos,n;
		int a[]={1,2,3,4,5};
		size = sizeof(a)/sizeof(a[0]);
		printf("The array elements before the update operation are");
		for(i=0;i<size;i++){
			printf("a[%d] = %d",i,a[i]);
		}
		printf("The position where you wish to update the element : ");
		scanf("%d",&pos);
		printf("The new element");
		scanf("%d",&x);
		a[pos-1] = x;
		printf("The array elements after update operation ");
		for(i=0;i<size;i++){
			printf("a[%d]=%d",i,a[i]);
		}
	
	
	return 0;
	}
