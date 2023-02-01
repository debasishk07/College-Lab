// write a program to check the input cahracter is lower case or upper case or digit or special character

	#include<stdio.h>
	int main(){
		char a;
		printf("Enter any character may be alphabet or number or digit :");
		scanf("%c",&a);

		if(a>='a' && a<='z')
			printf("The entered character is a lower case character\n");
		else if(a>='A' && a<='Z')
			printf("The entered character is a upper case character\n");
		else if(a>='0' && a<='9')
			printf("The entered character is a digit\n");
		else if(a>='!' && a<='*')
			printf("The entered character is a special character\n");

		else
			printf("The entered character is neighter in uppercase or lowercase or special character or digit\n");

		return 0;
	}
