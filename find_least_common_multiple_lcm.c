/*
Program will ask 2 numbers from the user 
And find the least common multiple of these numbers */

#include <stdio.h>


int main(){
	int first_num,second_num;
	int least_com,biggest;
	
	printf("Enter the first number : ");
	scanf("%d",&first_num); /* taking the first value */
	
	printf("Enter the second number : ");
	scanf("%d",&second_num); /* taking the second value */
	
	biggest = first_num > second_num ? first_num : second_num; /* we found the biggest number */
	
	least_com = biggest; /* first value of least common multiple */
	
	while(least_com % first_num  != 0 || least_com % second_num  != 0){ /* least_com is gonna increase until both numbers are divided it */
	
		least_com++;
		
	}
		
	printf("Least common multiple of %d and %d is %d \n",first_num,second_num,least_com); /* printing the result */
	
	return 0;
}
