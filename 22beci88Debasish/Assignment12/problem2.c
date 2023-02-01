// wap to create a function to take user input into an array 

	#include<stdio.h>
	void Print_array(int arr[], int len)
	{
		for (int i=0; i<len; i++){
			printf("%d ", arr[i]);
		}
		return;
	}
	
	int main(){
		int len = 10;
		int arr[10];
		for (int j=0; j<len; j++){

			scanf("%d",&arr[j]);
		}
		Print_array(arr,len);

		return 0;
	}
