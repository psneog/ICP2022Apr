/**********************************************************
Program to exchange the values of 2 variables
***********************************************************/

// Headers
# include <stdio.h>


// parameter passing by value
// pass the values of arguments into the parameters
// a, b = parameters, x, y = arguments
void swap_pass_by_value(int a, int b) {
	int tmp;
	
	printf("\tswap() in: Before swap: a = %d, b = %d\n", a, b);	
	// swap
	tmp = a;
	a = b;
	b = tmp;
		
	/* without a tmp variable
	a = a + b;
	b = a - b;
	a = a - b;
	*/
	printf("\tswap() out: Aftar swap: a = %d, b = %d\n", a, b);
	return;
}

// parameter passing by referance
// we pass the addresses of arguments

void swap_pass_by_referance(int *a, int *b) {
	int tmp;
	
	printf("\tswap() in: Before swap: *a = %d, *b = %d\n", *a, *b);	
	printf("\tswap() in: Before swap: a = %p, b = %p\n", a, b);	
	// swap
	tmp = *a;
	*a = *b;
	*b = tmp;
		
	/* without a tmp variable
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	*/
	printf("\tswap() out: Aftar swap: *a = %d, *b = %d\n", *a, *b);
	printf("\tswap() out: Aftar swap: a = %p, b = %p\n", a, b);
	return;
}



void main () {

	int x = 10, y = 20;
	
	printf("main() in: Before swap: x = %d, y = %d\n", x, y);
	printf("main() in: Before swap: &x = %p, y = %p\n", &x, &y);
	
	swap_pass_by_referance(&x, &y);
	
	printf("main() out: Aftar swap: x = %d, y = %d\n", x, y);
	printf("main() out: After swap: &x = %p, &y = %p\n", &x, &y);
	return;
}
	
	

