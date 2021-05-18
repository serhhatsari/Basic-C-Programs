/* 
This program will ask 2 numbers from the user
And find the greatest common divisor of these 2 numbers 
*/

#include <stdio.h>

int main() {
	int first_num,second_num,biggest; 
    int great_com_div = 1,i;
	
	printf("Please enter the first number: ");
	scanf("%d",&first_num); /* taking the first num */
	
	printf("Please enter the second number: ");
	scanf("%d",&second_num); /* taking the second num */
	
	biggest = second_num > first_num ? second_num : first_num; /* we found biggest number */
	
	for(i = 1; i <= biggest ;i++){ /* iteration */
		
		if(i > first_num || i > second_num){ /* if is is bigger than any of the numbers, it will end the loop */
			break;
		}
		
		if(first_num % i == 0 && second_num % i == 0 ){ /* it will check i is a divisor for both numbers or not */
			
			great_com_div = i;
			
		}
		
	}
	
	printf("Greatest Common Divisor of %d and %d is %d  \n",first_num,second_num,great_com_div); /* printing the result */
	
	return 0;
}
