/**********************************************************
Program to calculate 1 + 2 + 3 + ........ + last_num
***********************************************************/

// Headers
# include <stdio.h>


// add integers using while loop
// args:
//		n: last integer upto which numbers would be added
// returns:
//		the sum 1 + 2 + .... + n

int sum_while(int n) {
	int 	count = 1;		// keeps count of integers
	int		sum = 0;		// iterative sum on count
	
	while ( count <= n ) {
		sum += count;		// sum = sum + count
		count++;
	}	// while

	return(sum);
}


// add inttegers using for loop
// args:
//		n: last integer upto which numbers would be added
// returns:
//		the sum 1 + 2 + .... + n

int sum_for(int n) {	

	int count;
	int sum = 0; 
	
	
	for(count = 1; count <= n; count++) {
		sum = sum + count;
	}
	
	// bad programming style
	// for(count=1, sum=0; count<=n; sum += count++);

	return (sum);
}
	

void main() {

	int last_num, series_sum;
	
	printf("Input last_num: ");
	scanf("%d", &last_num);
	
	series_sum = sum_for(last_num);
	
	// display the sums
	printf("sum = %d\n", series_sum);
	return;
}	

