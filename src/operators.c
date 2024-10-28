/*
 ============================================================================
 Name        : operators.c
 Author      : codelahiru
 Version     : 0.001
 Copyright   :
 Description : C arithmetic operators
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 93343, b = 42232, c;

	c = a+b;
	printf("a+b = %d \n", c);

	c = a-b;
	printf("a-b = %d \n", c);

	c = a*b;
	printf("a*b = %d \n", c);

	c = a/b;
	printf("a/b = %d \n", c);

	c = a%b;
	printf("Remainder for a/b = %d \n", c);

	myFunction();

	return 0;
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	//return EXIT_SUCCESS;


	//  Description : Increment/Decrement Operators
	// ============================================================================

}

void myFunction() {
  printf("I just got executed!");
}


