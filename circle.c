/**********************************************************
Program to compute properties of circle
***********************************************************/

// Headers
# include 	<stdio.h>
# define 	PI		3.141 	// symboloc constant defined as
							// a macro preprocessor definition

// The main() function
void main() {

	float 	radius = 5;		// initialize radius
	float	diameter;
	float 	circumference;
	float	area;

	printf("Hello World! Let's see some circles!!\n");
	
	// Input the value of radius
	printf("Please input the radius: ");
	scanf("%f", &radius);
	
	diameter = 2 * radius;
	circumference = 2 * PI * radius;
	area = PI * radius * radius;
	
	printf("Properties of a circle of radius %5.3f are:\n", radius);
	printf("Diameter = %5.3f\n", diameter);
	printf("Circumference = %10.3f\n", circumference);
	printf("Area = %10.10f\n", area);
	
	return;
}
