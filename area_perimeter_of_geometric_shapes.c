/* 
 this program will find the area and perimeter of rectangle triangle circle
*/

#include <stdio.h>
#include <math.h>

int main(){

	int shape_type;
	double first_side,second_side, third_side;
	double s,area,perimeter,radius;
	printf("Enter the shape type...\n"); 
	
	printf("1. Rectangle \n");
	printf("2. Triangle \n");
	printf("3. Circle \n");
	
	scanf("%d",&shape_type); /* we choose which geometric shape we are gonna deal with */
	
	if(shape_type==1){
		
	 printf("please enter the short side of rectangle...\n");
	 scanf("%lf",&first_side);
	 
	 printf("please enter the long side of rectangle...\n");
	 scanf("%lf",&second_side);
	 
	 area = first_side * second_side; /* Calculating the are  of rectangle */
	 printf("Area of recantgle = %.2f \n",area);
	 
	 perimeter = 2*(first_side + second_side); /* Calculating the perimeter */
	 printf("Perimeter of rectangle = %.2f",perimeter);
	 
	}
	
	else if(shape_type == 2){ /*Ýf triangle  */
	   printf("please enter the sides of triangle...\n");
	   
	   scanf("%lf",&first_side);
	   
	   scanf("%lf",&second_side);
	  
	   scanf("%lf",&third_side);
	   
	   s = (first_side + second_side + third_side) / 2; /* We need s to use heron formula */
	   
	   area = sqrt(s*(s-first_side)*(s-second_side)*(s-third_side));  /*Calculating the are of triangle using heron formula  */
	   
	   printf("Area of triangle = %.2f \n",area);
	   
	   perimeter = first_side + second_side + third_side; /* calculating the perimeter */
	   
	   printf("\n Perimeter of triangle = %.2f ",perimeter);
	}
	
	else if(shape_type == 3){ /* Ýf circle */
		printf("please enter the radius of the circle...\n");
		scanf("%lf",&radius);
	   	
	    area = 3.14 * radius * radius; /* area of circle */
	    printf("Area of the circle = %.2f \n", area); 
	    
	    perimeter = 2*3.14*radius; /* perimeter of circle */
	    printf("Perimeter of the circle = %.2f ",perimeter); 
	}
	
	else{
		printf("You should have entered 1,2 or 3...");
		return;
	}
	
}
