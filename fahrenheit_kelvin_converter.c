/*
this program will ask what kind of convert user wants to do
than do it 
*/

#include <stdio.h>

int main(){
	
	int temp_type;
	double temp;
	double result_temp;
	
	printf("Enter the calculation type...\n"); 
	printf("1. Fahrenheit to Kelvin...\n");
	printf("2. Kelvin to Fahrenheit...\n");
	
	scanf("%d",&temp_type); /* We choose the type of conversion */
	
	while(temp_type < 1 || temp_type > 2){
		
		printf("Enter the calculation type correctly !! :");
		scanf("%d",&temp_type);
		
	}
	
	
	
	if(temp_type == 1){ /* Fahrenheit to kelvin */
		
		printf("Please enter the temperature in Fahrenheit...\n");
		scanf("%lf",&temp);
		
		result_temp =  ((5.0 / 9.0) * (temp - 32)) + 273.15; /* fahrenheit to kelvin formula */
   	    printf("Result = %.4f Kelvin ",result_temp);
	}
	
	else if(temp_type == 2){ /* kelvin to fahrenheit */
		
		printf("Please enter the temperature in Kelvin...\n");
		scanf("%lf",&temp);
		
		result_temp =  (9.0 / 5.0) * ( temp - 273.15)  + 32; /* kelvin to fahrenheit formula */
		printf("Result = %.4f Fahrenheit ",result_temp);
	}

}
