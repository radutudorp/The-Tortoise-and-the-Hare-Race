//// C How To Program 9e, Ex.5.54, The Tortoise and the Hare Race
#define _CRT_SECURE_NO_WARNINGS // ignores printf/scanf warnings in Visual Studio
#include <stdio.h> // includes standard input/output header (for prinf/scanf functions)
#include <stdlib.h> // includes standard library header (for rand function)
#include <time.h> // includes time header (for time function)
#include <iostream> // for system("pause"); /waiting for the user to press any key to continue
using namespace std;

int main(void) {
	int tortoisePosition = 1; // Tortoise's position
	int harePosition = 1; // Hare's Position

	printf("%s\n", "ON YOUR MARK, GET SET");
	printf("%s\n", "BANG             !!!!");
	printf("%s\n", "AND THEY'RE OFF  !!!!");

	srand(time(NULL)); // seed random number generator

	while (tortoisePosition < 70 && harePosition < 70) {

		int randomNumber = rand() % 10 + 1;
		
		// Determine Tortoise's move
		if (randomNumber >= 1 && randomNumber <= 5) { // Tortoise fast plod
			tortoisePosition += 3;
		}
		else if (randomNumber >= 6 && randomNumber <= 7) { // Tortoise slip
			tortoisePosition -= 6;
		}
		else { // Tortoise slow plod
			tortoisePosition += 1;
		}

		// Ensure Tortoise position doesn't go below 1
		if (tortoisePosition < 1) {
			tortoisePosition = 1;
		}

		randomNumber = rand() % 10 + 1;

		// Determine Hare's move
		if (randomNumber >= 1 && randomNumber <= 2) { // Hare sleep
			harePosition += 0;
		}
		else if (randomNumber >= 3 && randomNumber <= 4) { // Hare big hop
			harePosition += 9;
		}
		else if (randomNumber == 5) { // Hare big slip
			harePosition -= 12;
		}
		else if (randomNumber >= 6 && randomNumber <= 8) { // Hare small hop
			harePosition += 1;
		}
		else { // Hare small slip
			harePosition -= 2;
		}

		// Ensure Hare position doesn't go below 1
		if (harePosition < 1) {
			harePosition = 1;
		}

		// Print Tortoise position
		for (int i = 1; i <= 70; i++) {
			if (i == tortoisePosition) {
				printf("%s", "T");
			}
			else {
				printf("%s", "_");
			}
		}
		puts("");

		// Print Hare position
		for (int i = 1; i <= 70; i++) {
			if (i == harePosition) {
				printf("%s", "H");
			}
			else {
				printf("%s", "_");
			}
		}
		puts("");

		// Check if they are at the same position
		if (tortoisePosition == harePosition) {
			printf("%s\n", "OUCH!!!");
		}
	}

	// Determine and print the winner
	if (tortoisePosition == harePosition) {
		printf("%s\n", "It's a tie.");
	}
	else if (tortoisePosition >= 70) {
		printf("%s\n", "TORTOISE WINS!!! YAY!!!");
	}
	else {
		printf("%s\n", "Hare wins. Yuch.");
	}

	printf("\n\a");
	system("pause");
}

