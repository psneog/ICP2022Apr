/**********************************************************
Program to calculate n! = 1 * 2 * 3 * ........ * n
***********************************************************/

// Headers
# include <stdio.h>

// The main() function
void main() {

	int 	n;
	int 	count = 1;				// keeps count of integers
	unsigned long	fact = 1;		// iterative product on count	
									// we need to start from 1 and
									// not 0
	
	printf("Input n: ");
	scanf("%d", &n);
	
	while ( count <= n ) {
		// printf("Entering while: count = %d, fact = %ld, count <= n = %d\n", count, fact, count <= n);
		fact *= count;		// sum = sum + count
		count++;
		// printf("Exiting while: count = %d, fact = %ld, count <= n = %d\n", count, fact, count <= n);
	}	// while
	
	
	// display the sums
	printf("%d! = %ld\n", n, fact);
	
	return;
}
