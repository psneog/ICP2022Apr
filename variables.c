/**********************************************************
Program to demonstrate variables and expressions
***********************************************************/

// Headers
# include <stdio.h>

// The main() function

void main() {

	// declare some variables
	int 	a = 0; 			// integer variable
	float 	b = 0.0;		// floating point (real) variable
	int 	c = 10, d = 20;
	char	ch = 'A';
	char	message[] = "Hello world";
	
	// to display the variables
	printf("The value of a = %d\n", a); 		// display a int variable
	printf("The value of b = %f\n", b);			// display a float
	printf("Values of c = %d, d = %d\n", c, d);	// displays 2 variables
	printf("Character ch = %c\n", ch);
	printf("Message = %s\n", message);
	
	// try some expressions
	a = c + d;
	b = c + d;
	
	printf("\nAfter some expressions....\n");
	printf("The value of a = %d\n", a); 		// display a int variable
	printf("The value of b = %f\n", b);			// display a float
	
	// more expressions
	a = c / d;
	b = (float) c / d;
	
	printf("\nAfter some more expressions....\n");
	printf("The value of a = %d\n", a); 		// display a int variable
	printf("The value of b = %f\n", b);			// display a float
	
	// sizeof variables
	printf("\nSize of int = %ld\n", sizeof(int));	 		// sizeof is an operator
	printf("Size of short int = %ld\n", sizeof(short));	// sizeof is an operator
	printf("Size of long int = %ld\n", sizeof(long));		// sizeof is an operator
	printf("Size of unsigned int = %ld\n", sizeof(unsigned int));	// sizeof is an operator
	printf("Size of char = %ld\n", sizeof(char));	// sizeof is an operator
	printf("Size of float = %ld\n", sizeof(float));	// sizeof is an operator
	printf("Size of double = %ld\n", sizeof(double));	// sizeof is an operator
	printf("Size of \"message\" = %ld\n", sizeof(message));	// sizeof is an operator

	// funny
	printf("\nFunny...\n");
	printf("ch = %c, ch = %d\n", ch, ch);
	printf("c = %c, c = %d, c = %o, c = %0x\n", c, c, c, c);
	
	return;
}
