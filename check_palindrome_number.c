/* 
This program will ask a number from the user
And it will check if the number is palindrome number or not 
*/

/*
A palindromic number (also known as a numeral palindrome or a numeric palindrome)
 is a number (such as 16461) that remains the same when its digits are reversed
16461 = 16461 , 1234 != 4321
*/

#include <stdio.h>
#include <math.h>

int main(){
	int number, temp_number;
	int reversed_number = 0;
	int i,len = 0,a = 1;
	
	printf("Please enter the number: ");
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
  	
  	reversed_number += i * pow(10,len-a); /* we calculate the reversed number */
  	
	a++;
  	
  }

  
  if(temp_number == reversed_number){ /* if reversed equals the original one it means our number is palindrome  */
  	
  	printf("Your number is a palindrome number");
  	
  }else{
  	
  	printf("Your number is not a palindrome number");
  	
  }
	
	return 0;
}
