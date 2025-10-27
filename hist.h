// File: Hist.h
// Description: This header file assists in verifying that function implementations in hist.c are valid and match the prototypes for sucessful compliation 
// @author Mia Venesky
//
//


// Guards to ensure smooth compliation
#ifndef HIST_H
#define HIST_H


#include <stdio.h>
#include <stdlib.h>

// Constants for size restraints to use in hist.c
#define HIST_SIZE 26
#define MAX_LENGTH 50

// Function declartions
int read_text(int arrayOfInts[]);
void display_histogram(int arrayOfInts[]);

#endif
