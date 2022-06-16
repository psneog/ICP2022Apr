/**********************************************************
Program to display prime numbers from 1 to n
***********************************************************/

// Headers
# include <stdio.h>



// function to decide whether a number is prime or not
// Args:
//		int x : input integer
// Returns:
//		1 if x is prime, 
//		0 otherwise
int isprime(int x) {

	int 	i = 2;
	int		flag = 1;	// true
	
	while ( (i < x ) && (flag == 1) ) {

		// check divisibility of n by i
		if ( x % i == 0) // n is divisible by i
			flag = 0;
		
		i++;
	}
	
	return (flag);  	// 0 if x is not prime
						// 1 if prime
}

// Function to generate the integers, test each of them
// for primality, and to display whether prime or not
// Args:
//		n : last number of the range
// Returns:
//		none
void display_primes(int n) {
	
	int 	count = 1;
	
	printf("Prime numbers upto %d are:\n", n);
	
	for (count = 1; count <= n; count++) {
		if ( isprime(count) ) 
			printf("%d, ", count);
	}
	return;
}

void main() {

	int 	last_num;	// last num in series
	
	// input last_num
	printf("Input last number: ");
	scanf("%d", &last_num);

	display_primes(last_num);
	
	printf("\nBye\n");
	return;
}
