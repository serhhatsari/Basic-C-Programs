/* 
this program will take the coefficients of the quadratic equations
and our program will find the root of this equation */

#include <stdio.h>
#include <math.h>

void main(){
	double first_coef ,second_coef ,constant;
	double root_one,root_two;
    double discrimant;
	
	printf("Enter the x^2 s coefficient :");
	scanf("%lf",&first_coef);
	 
	printf("Enter the x's coefficient :");
	scanf("%lf",&second_coef);
	
	printf("Enter the constant :");
	scanf("%lf",&constant);
	
	discrimant = sqrt((second_coef * second_coef) - (4 * first_coef * constant )); /* we find the discrimant with sqrt(b^2 - 4*a*c) */
    
    if(discrimant >= 0 ){ /* if discrimant is bigger than zero, it means it has 2 real roots */
	
	
	root_one = (-1 * second_coef + discrimant) / (2 * first_coef); /* we found the first root  (- b + discrimant / -2a) */
	
	root_two = (-1 * second_coef - discrimant) / (2 * first_coef); /* we found the second root (-b - discrimant / -2a) */
	
	printf("\nOur equation = %-.3lfx^2  %-.3lfx   %-.3lf   \n\n",first_coef,second_coef,constant); /* printing the equation */
	
	printf("Root 1 = %-.3lf \n",root_one);
	printf("Root 2 = %-.3lf \n",root_two);

    }
    else{ /* if discrimant is smaller than zero it means our equation doesnt have root */
    	
		printf("\nOur equation = %-.3lfx^2  %-.3lfx   %-.3lf   \n\n",first_coef,second_coef,constant);	 /* printing the equation */
			
		printf("There is no real root of this equation \n");
	
	}
	
	return;
}
