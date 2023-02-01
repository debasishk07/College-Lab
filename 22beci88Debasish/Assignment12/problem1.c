// wap to create a function to print an array

	#include<stdio.h>
	
	void Print_array(int arr[], int len)
	{
		for(int i = 0; i< len ; i++){
			printf("%d", arr[i]);
		}
		return;
	}

	int main()
	{
		int arr[10] = {1,2,3,4,5,6,7,8,9,0};
		
		int len = 10;

		Print_array(arr,len);

		return 0;
	}
