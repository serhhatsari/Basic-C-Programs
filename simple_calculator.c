
/*
This is a basic calculator
*/

#include <stdio.h>

void main(){
	int input;
	int first_num, second_num;
	
	printf("********** BASIC CALCULATOR ******** \n");
	
	printf("1- Addition \n");
	printf("2- Substraction \n");
	printf("3- Multiplication \n");
	printf("4- Division \n");
	
	printf("Enter the operation you want to do: ");
	scanf("%d",&input);
	
	while(input < 1 || input > 4){ /* it will check the input */
		
	printf("Enter the operation you want to do: ");
	scanf("%d",&input);		
		
		
	}
	
	printf("Enter the first number:");
	scanf("%d",&first_num); /* taking the first number */
	printf("Enter the second number:");
	scanf("%d",&second_num); /* taking the second number */
	
	switch(input){
		
		case 1: /* if input is Addition */
			
			printf("%d + %d = %d",first_num,second_num,first_num + second_num);
			break;
			
		case 2: /* if input is Substraction */
			
            printf("%d - %d = %d",first_num,second_num,first_num - second_num);
		   break;
		   
		case 3: /* if input is Multiplication */
		
			printf("%d * %d = %d",first_num,second_num,first_num * second_num);			
			break;
			
	    case 4: /* if input is Division */
	    
			printf("%d / %d = %.2lf",first_num,second_num,first_num / (double)second_num);	    	
	    	break;	
		
	}
	
	
	
	return;
}
