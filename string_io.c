/**********************************************************
Program to demonstrate string i/o
***********************************************************/

// Headers
# include <stdio.h>
//# include <strings.h>				// contains the gets() function declaration

// The main() function
void main() {

	char message[] = "Welcome";		// a constant sttring literal 
	char name[100]; 				// we'll readv a name into this variable
	char ch;
	
	// Manipulating a string
	// printf("Please enter your name: ");
	// scanf("%s", name);
	// scanf("%[^\n]", name);
	// gets(name);
	// printf("Hello %s, %s!\n", name, message);
	
	// manipulating characters
	printf("Enter a character: ");
	// scanf("%c", &ch);
	ch = getchar();
	// printf("You entered %c\n", ch);
	putchar(ch);
	
	return;
}
