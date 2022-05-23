/**********************************************************
Program to calculate letter grades for students to demonstrate
the use of switch statement. The if part only simulates how 
a variable to be used in switch block may be generated. In
real life this value may come from any other set of code
...........................................................

List of grades

Marks range		Grade	Numeric code
------------------------------------
100 .. >= 90	AA		1
>=80			AB		2
>=70			BB		3
>=60			BC		4
>=50			CC		5
>=40			CD		6
>=30			DD		7
otherwise		F		8 

***********************************************************/

// Headers
# include <stdio.h>

// The main() function
void main() {
	
	float	marks = 0;
	int		ncode = 0;	// numeric code for range 
	
	printf("Please input marks (between 0 & 100: ");
	scanf("%f", &marks);
	
	if (marks > 100 || marks < 0) {
		printf("Error! Marks must be between 0..100.\nExiting...\n");
		return;
	}
	
	// calculate numeric codes

	if (marks >= 90) {
		ncode = 1;
	} else {
		if (marks >= 80) {
			ncode = 2; 
		} else {
			if (marks >= 70) {
				ncode = 3;
			} else {
				if (marks >= 60) {
					ncode = 4;
				} else {
					if (marks >= 50) {
						ncode = 5;
					} else {
						if (marks >= 40) {
							ncode = 6;
						} else {
							if (marks >= 30) {
								ncode = 7;
							}
						}
					}
				}
			}
		}
	}
	
	switch (ncode) {
		case 1: printf("Letter grade = AA\n"); break;
		case 2: printf("Letter grade = AB\n"); break;
		case 3: printf("Letter grade = BB\n"); break;
		case 4: printf("Letter grade = BC\n"); break;
		case 5: printf("Letter grade = CC\n"); break;
		case 6: printf("Letter grade = CD\n"); break;
		case 7: printf("Letter grade = DD\n"); break;
		default: printf("Letter grade = F\n"); break;
	}
		
	return;
}
