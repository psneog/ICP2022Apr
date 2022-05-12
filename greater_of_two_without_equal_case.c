/**********************************************************
Program to find greater of two variables (without 
considering the equal case)
***********************************************************/

// Headers

# include <stdio.h>

// The main() function

void main() {
	int 	a = 0, b = 0;	// we'll compare these two variables

	printf("Please give the numbers: ");
	scanf("%d%d", &a, &b);	// inputs values of a & b
							// & is the address operator
	
	// compare
	if (a > b) {
		printf("If part is executed\n");
		printf("a = %d is greater then b = %d\n", a, b);						
	} else {
		printf("Else part is executed\n");
		printf("b = %d is greater then/equal (not tested) a = %d\n", b, a);
	} // end if (a > b)
	
	return;
}
