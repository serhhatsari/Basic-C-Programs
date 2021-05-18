/* 
This program will ask a number from the user
And it will print the reversed version of that number
*/

#include <stdio.h>
#include <math.h>

int main(){
  int number,reversed_number = 0,temp_number;
  int len = 0, i ,a = 1;
  
  printf("Please enter the number you want to reverse :");
  scanf("%d",&number);
  
  temp_number = number;
  
  while(temp_number > 0){ /* we found find how many digit number has */
  	
  	temp_number = temp_number / 10;
  	len++;
  	
  }
  
  temp_number = number; /* original number is stored in temp */
  
  while( number > 0){ /* reverse the number */
  	
  	i = number % 10; /* we found the right digit*/
  	
  	number = number / 10; /* we deleted the right digit */
  	
  	reversed_number += i * pow(10,len-a); /* we find the reversed number */
  	
	a++;
  	
  }
  
  printf("Original number: %d \n Reversed Number: %d \n",temp_number,reversed_number); /* printing the result */
   
	return 0;
}
