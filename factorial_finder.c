
/*
This program will ask a number from the user.
And it will find the factorial of that number 
*/

#include <stdio.h>

void main(){
	int input,i; /* i is for loop. */
	int result = 1; 
	
	printf("Please enter the number:");
	scanf("%d",&input);
	
	while(input < 0){ /* checking if user entered negative number or not. if input is negative program will ask again */
		
    printf("Please enter a non negative number:");
	scanf("%d",&input);
		
	}
	
	for(i = input; i > 0;i --){ /* this loop will find the factorial of the number */
		
		result *=i; 
		
	}
	
	printf("Factorial of %d is = %d \n",input,result); /* printing the result */
	
	
	
	return;
}
