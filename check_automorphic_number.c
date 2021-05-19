/* 
This program will ask a number from the user
And it will check if the number is automorphic number or not 
*/

/*
Automorphic number if and only if the square of the given number ends with the same number itself. 
For example, 25, 76 are automorphic numbers because their square is 625 and 5776,
respectively and the last two digits of the square represent the number itself.
*/

#include <stdio.h>
#include <math.h>

int main(){

    int number, square_of_num;
	int  temp_number, result;
    int len = 0;
 
    printf("Please enter a number \n");
    scanf("%d",&number);
 
    square_of_num = number * number;  /* square of our number */
    
    temp_number = number; 

    while(temp_number > 0){ /* find the length of the number */
        len++;
        temp_number = temp_number / 10;
    }

    result = square_of_num % (int)floor(pow(10,len)); /* find the last digits */
  
    if(result == number) /* if result equals our number that means our number is automorphic */
        printf("Your number is a Automorphic number \n");
    else
       printf("Your number is Not Automorphic \n");
 
    return 0;
}


