/*Luc Gremillion
  February 19, 2023
  C Programming
  Rebecca Dewitt*/


  //4.10 - (Average a Sequence of Integers)
  //Write a program that calculates 
  //and prints the average of several integers
#include <stdio.h>

//Main Function
int main() {

	//Declare variables
	int inputLoop = 0, counter = 0;
	float totalNum = 0;

	//Do-While loop to continue taking input
	//till sentinel value is triggered
	do {
		//Prompt user to insert a number and 
		//the next line will also intake that input.
		printf("Please enter a number to add to the list of integers or \nEnter 9999 to stop the program : ");
		scanf_s("%d", &inputLoop);

		//statement to test if the input was the sentinel value
		if (inputLoop != 9999) {
			totalNum += inputLoop;
			counter++;
		}
		//adds a new line
		puts("");
	}while (inputLoop != 9999);

	//Prompts the user on the average of all number inputed.
	printf("Average number of the input numbers is:  %.2f\n\n", totalNum / counter);
}

