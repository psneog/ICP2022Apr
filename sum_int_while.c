/**********************************************************
Program to calculate 1 + 2 + 3 + ........ + n
***********************************************************/

// Headers
# include <stdio.h>

// The main() function
void main() {

	int 	n;
	int 	count = 1;		// keeps count of integers
	int		sum = 0;		// iterative sum on count
	int 	sum_using_formula = 0;	// for verification
	
	printf("Input n: ");
	scanf("%d", &n);
	
	while ( count <= n ) {
		// printf("Entering while: count = %d, sum = %d, count <= n = %d\n", count, sum, count <= n);
		sum += count;		// sum = sum + count
		count++;
		// printf("Exiting while: count = %d, sum = %d, count <= n = %d\n", count, sum, count <= n);
	}	// while
	
	// calculate sum using formula
	sum_using_formula = (n*(n+1))/2;
	
	// display the sums
	printf("sum = %d\n", sum);
	printf("sum_using_formula = %d\n", sum_using_formula);
	
	return;
}
