/**********************************************************
Program to compare two numbers
***********************************************************/

// Headers

# include <stdio.h>

// The main() function

void main() {
	
	int 	a = 0, b = 0;

	printf("Give two numbers: ");
	scanf("%d%d", &a, &b);
	
	// compare if they are equal
	if ( a == b) {
		printf("\"if ( a == b)\" part is being executed...\n");
		printf("a = %d is equal to b = %d\n", a, b);
	} else {
		printf("\"else\" part of \"if ( a == b)\" is being executed...\n");
		// compare if a > b
		if ( a > b ) {
			printf("\"if ( a > b)\" part is being executed...\n");
			printf("a = %d is greater then b = %d\n", a, b);
		} else {
			printf("\"else\" part of \"if ( a > b)\" is being executed...\n");
			printf("b = %d is greater then a = %d\n", b, a);
		} // end if ( a > b )
	} // end if ( a == b )
	
	// alternately, (not optimal for time)
	/*
	if ( a == b ) { printf("Equal\n"); }
	if ( a > b )  { printf("a is greater\n"); }
	if ( a < b )  { printf("b is greater\n"); }
	*/
	return;
}
