/**********************************************************
Program to
***********************************************************/

// Headers
# include <stdio.h>


//declaration for function max()

int max(int num1, int num2);
int max1(int num1, int num2);

// declare add()
float add(float a, float b);

// The main() function

void main() {

	int 	x, y; 		// Input nums
	int		larger;
	float 	sum;
	
	printf("Input x, y: ");
	scanf("%d%d", &x, &y);
	
	// call the max() function
	larger = max1(x, y);
	sum = add(x, y);
	
	printf("%d is larger\nSum is = %f\n", larger, sum);
	
	return;
}

// Definition for function max()
/* function returning the max between two numbers */
int max(int num1, int num2) {
  
   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;

   return(result); 
}

/* another function returning the max between two numbers */
int max1(int num1, int num2) {
  
   /* local variable declaration */
   int result;
   
   /*
   	if (num1 > num2)
    	  result = num1;
   	else
    	  result = num2;
   	*/
   	
	// operator form of if statement ( The ternary "?..:" operator )
	result = num1 > num2 ? num1 : num2;
 
   return(result); 
}

float add(float a, float b) {
	return (a+b);
}



