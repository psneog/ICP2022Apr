/**********************************************************
Program to solve quadratic equation of the form
      a*x^2 + b*x + c = 0
and analyze the natures of the roots


the solutions are:
 
 x = (- b +- sqrt(b^2 - 4*a*c)) / (2*a) where a != 0
 
 Strategy:
 
 Check quadratic: a != 0
 Check discriminant = b^2 - 4*a*c:
 	== 0 -> real and equal roots
 	> 0  -> real roots
 	< 0  -> imaginary, conjugate complex roots
 
 sqrt (-4) = sqrt ( -  
 
***********************************************************/

// Headers
# include <stdio.h>
# include <math.h>			// for sqrt()
# include <stdlib.h>		// for exit()

// The main() function
void main() {

	float 	a = 0, b = 0, c = 0;	// parameters
	float   discriminant = 0;		// discriminant
	float   x1 = 0, x2 = 0;			// roots

	printf("Hello World! Welcome to the world of quadratic equation!!\n");
	printf("Enter a, b, c (a!=0): ");
	scanf("%f%f%f", &a, &b, &c);
	
	// check if quadratic
	if ( a == 0 ) {
		printf("Error! not a quadratic equation.\n");
		exit(-1);		// -ve for error, 0 for correct execution, +ve for other values
	} 
	
	discriminant = b*b - 4*a*c;
	
	// check the discriminant
	if (discriminant == 0) {
		printf("Real and equal roots.\n");
		// compute the roots
		x1 = x2 = - b / (2*a);
		// display them
		printf("x1 = %f, x2 = %f\n", x1, x2);
	} else {
		if (discriminant > 0) {
			printf("Real but unequal roots.\n");
			// compute them (separately)
			x1 =  (- b + sqrt(discriminant))/(2*a);
			x2 =  (- b - sqrt(discriminant))/(2*a);
	 		// display them
	 		printf("x1 = %f, x2 = %f\n", x1, x2);
	 	} else {
	 		printf("Imaginary, conjugate reoots\n");
	 		// compute real part
	 		x1 = - b / (2*a);
	 		// compute imaginary part
	 		x2 = sqrt(abs(discriminant))/(2*a);
	 		// displayb the roots
	 		printf("x1 = <%f + i%f>, x2 = <%f - i%f>\n", x1, x2, x1, x2);
	 	} // end if (discriminant > 0)
	} // end if (discriminant == 0)
	
	return;
}
