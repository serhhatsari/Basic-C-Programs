/* 
This program will ask a number from the user
And it will check if the number is armstrong number or not 
*/

/*
An Armstrong number is a number such that 
the sum of its digits raised to the third power is equal to the number itself 
For example, 371 is an Armstrong number, since
3**3 + 7**3 + 1**3 = 371.
*/

#include <stdio.h>
#include <math.h>

int main(){
	int number,original;
	int test_n = 0;
	
	printf("Please enter the number: ");
	scanf("%d",&number);
	
	original = number; /* original will hold the first value of number */
	
	while(number > 0){ /* it will go until number became zero */
		
		if(number > 10){ 
			
		test_n += pow(number % 10,3); /* taking the cube of the right digit */
		
        }else{
        	
        test_n += pow(number,3);	
        	
		}
		 
		number = number / 10;
		
	}
	
	if(test_n == original) { /* checking if they are equal or not */
		
		printf("Your number is armstrong number \n");
		
	}else{
		
		printf("Your number is not armstrong number \n");
	}
	
	return 0;
}
