/* 
This program will ask a number from the user
And it will check if the number is perfect number or not 
*/

/*
Perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.
For instance, 6 has divisors 1, 2 and 3 (excluding itself), and 1 + 2 + 3 = 6, so 6 is a perfect number.
*/

#include <stdio.h>

int main(){
	int number;
	int sum_of_divisors = 0;
	int i;
	
	printf("Please enter the number: ");
	scanf("%d",&number);
	
	for(i = 1; i < number; i++){ /* i will increase until number */
		
		if(number % i == 0){ /* checking if i is the divisor of number */
			
			sum_of_divisors += i; /* if i is the divisor of the number we add it to sum of divisors */
			
		}
		
	}
	
	if(sum_of_divisors == number){ /* if sum of divisors equals our number that means number is a perfect number */
		
		printf("Your number is a perfect number \n");
		
	}else{
		
		printf("Your number is not a perfect number \n");
		
	}
	
	
	
	return 0;
}
