
/* 
This program will ask a number from the user.
And it will print all fibonacci numbers until that number, that number is not included 
*/

#include <stdio.h>

void main(){
	int input;
	int first = 1, second = 1,temp;
	
	printf("Please enter the number :");
	scanf("%d",&input);
	
	while(input <= 1){ /* this while loop will check the input. if the input is negative it will ask again */
	
	printf("Please enter a number bigger than 1... :");
	scanf("%d",&input);
	
    }
    
	printf(" %d - %d -",first,second); /* printing the first 2 members of fibonacci sequence */
	
	while(1){ 
	
	temp = first;
	first = second;
    second = first + temp;
    
    if(second >= input) break; /* if second numer reached our input it will end the loop */
    
	printf("%d - ",second);
	 
    }
    
    printf("\n");
    
    return;
}
