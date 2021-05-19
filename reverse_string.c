/*
This program will ask a string from the user
And it will print the reversed version of it
*/

#include <stdio.h>
#include <string.h>

int main(){
	char input_arr[100];
	char reversed[100];
	int i,k = 0,size;
	
	printf("Please enter the word you want to reverse: ");
	scanf("%s",input_arr);
	
	size = strlen(input_arr); /* take the size of the first string */
	
	for(i = size-1; i >= 0 ; i--){ /* it will reverse the string */
		
		reversed[k] = input_arr[i];
		k++;
		
	}
	
	reversed[size] = '\0'; 
	
	printf("Reversed word is %s \n",reversed); /* print the result */
	
	
	
	return 0;
}
