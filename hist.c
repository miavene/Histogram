// File: hist.c
// @author Mia Venesky
// Description: This file defines functions read_text and display_histogram as imported from the hist.h header file
// Purpose of this file is to sucessfully read in characters and display a histogram of the the amount of alphabetic 
// characters as a bar chart.
//


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "hist.h"

// read_text reads a file of writing to process and accurately store the amount of each letter present in the file
//
//@param int arrayOfInts[] is param fixed size of 26 to store amount of each letter present
//@returns amount of times a letter was read in
int read_text(int arrayOfInts[]){
	int countOfRead = 0;
	int ch;
	while((ch = getchar()) != EOF){
		ch = toupper(ch);
		if(ch >= 'A' && ch <= 'Z'){
			arrayOfInts[ch - 65] = arrayOfInts[ch - 65] + 1;
			countOfRead++;
}
	}
	return countOfRead;
}

// this function displays the histogram of array
//
//@param int arrayOfInts[] is param fixed size of 26 that stores number each letter appeared and to be displayed
//@returns void (nothing)
void display_histogram(int arrayOfInts[]){
	for(int i = 0; i < HIST_SIZE; i++){
		char letter = (char)(65+i);
		printf("%c: ", letter);
		int temp = 0;
		for(int j = 0; j < arrayOfInts[i] && j < 50; j++){ 
			//printf("%d \n" ,arrayOfInts[i]);
			printf("*");
			temp = j + 1;
		}
		if(temp>=MAX_LENGTH){
			printf("+");
		}
		printf("\n");
	}

}

// main function takes in no params
// declares the int array to hold character counts
// invokes read_text() and passes in the created array
// if it doesnt return no characters read, it continues to display the histogram, else it prints a message that nothing was read
//  returns value EXIT_SUCCESS if code executes with no issues
int main(void){
	int count[HIST_SIZE] = {0};
	int alphChars = read_text(count);
	if(alphChars == 0){
		fprintf(stderr, "no alphabetic characters read\n");
	} else{
		printf("%d alphabetic characters read\n", alphChars);
		display_histogram(count);
	}

	return EXIT_SUCCESS;
}
