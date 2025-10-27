# Histogram
A C program that reads text input and displays a frequency histogram of alphabetic characters as a bar chart. It processes input from standard input (stdin), counts occurrences of each letter (A–Z), and outputs a clean visual representation using ASCII characters!

# Features

Reads and counts alphabetic characters (case-insensitive).

Displays results as a histogram bar chart using *

Caps long bars at 50 characters and marks overflow with a + symbol.

Handles input directly from stdin for flexible testing (e.g., file redirection or manual typing).

Implements clean modular design with hist.c and hist.h.

# How to Run

Compile the program:

gcc hist.c -o hist


Run with a text file:

./hist < example.txt


Or type directly

# Example Output

100 alphabetic characters read

A: ****

B: *

C: **

D: ***

...

Z: *


# Extra Info

This project was completed for coursework at RIT to strengthen skills in file input/output, ASCII character processing, arrays, and procedural design in C.

# Thanks for reading !! :)
