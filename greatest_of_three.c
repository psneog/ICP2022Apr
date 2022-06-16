/**********************************************************
Program to find the greatest of three numbers
***********************************************************/

// Headers
# include <stdio.h>

// The main() function
void main() {
	int 	a = 0, b = 0, c = 0;
	
	printf("Give three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if ( a > b ) {
		if ( a > c ) {
			printf("a = %d is the greatest.\n", a); 
		} else {
			printf("c = %d is the greatest.\n", c);
		}
	} else {
	    if ( b > c ) {
	    	printf("b = %d is the greatest.\n", b);
	    } else {
	    	printf("c = %d is the greatest.\n", c);
	    }
	}
	
	return;
}
