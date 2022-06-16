/**********************************************************
Program to display first n integers
***********************************************************/

// Headers
# include <stdio.h>

// The main() function
void main() {

	int 	n; 		// last int to be displayed
	int 	count;	// counts the current integer 
					// to be displayed
					
	printf("Please give the last integer (n): ");
	scanf("%d", &n);
	
	count = 1; 	// initialize the int to be displayed
	
	// loop (while)
	while (count <= n) {
		printf("%d, ", count);
		count++; // increase value of count by 1
	}	// end while
	
	printf("\n");

	// same thing using do..while
	
	// init count
	count = 1;
	
	// loop
	do {
		printf("%d, ", count);
		count++; // increase value of count by 1
	} while (count <= n); 	// end while
	
	printf("\n");
	

	
	return;
}
