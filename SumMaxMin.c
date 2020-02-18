/*Program to take in a number of up to 10 digits and find the sum of the digits, min of the digits, and max of the digits*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	//Variables
	int sum = 0, i, length, max, min, si; //Variables for sum, i counter, max value, and min value 
	char number[11]; 

	//Output Statement
	printf("Please enter a number of up to 10 digits (1000000000)\n");

	
	scanf("%s",number);//Get number from user as a string 
//	printf("%s\n", number); //Print the number for ref
	length = strlen(number); //Use strlen func to get length
				//of the string w/o null term char
				
//	printf("%d\n", length);//Print the length for reference

	for(i = 0; i < length ; i++)
	{
		
		sum = sum + (int)(number[i] - '0'); 
		//How to convert char that is a digit to its corresponding 								digit		
	}
	
	//Print the sum of the digits	
	printf("The sum of your number is: %d\n", sum);	
	
	//Set max to first element in the array	
	max = (int)(number[0] - '0'); 
	
	//For loop to compare other elements to first element to find max
	for (i = 1; i < length; i++)
	{
		if((int)(number[i] - '0') > max)
			max = (int)(number[i] - '0'); 

	}	
	//Print the max element
	printf("The max digit is: %d\n", max); 
	
	//Set min to first element in the array
	min = (int)(number[0] - '0'); 

	//For loop to compare other elements to first element to find min
	for (i = 1; i < length; i++)
	{
		if((int)(number[i] - '0') < min)
			min = (int)(number[i] - '0'); 
	}
	
	//Print the min element
	printf("The min digit is: %d\n", min); 
	return 0; 



}

