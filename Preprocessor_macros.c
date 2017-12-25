/*
 ============================================================================
 Name        : Preprocessor_macros.c
 Author      : Chaitanya Shah
 Version     : v1
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* Problem Statement from MIT 6.087, IAP 2010, Problem set 1, Problem 1.2 */

/*
Consider the statement
double ans = 18.0/squared(2+1);

For each of the four versions of the function macro squared() below, write the corresponding value of ans.
1. #define squared(x) x*x
2. #define squared(x) (x*x)
3. #define squared(x) (x)*(x)
4. #define squared(x) ((x)*(x))
*/

#include <stdio.h>

#define squared1(x) x*x
#define squared2(x) (x*x)
#define squared3(x) (x)*(x)
#define squared4(x) ((x)*(x))

int main(void)
{
	double ans1 = 18.0/squared1(2+1);
	double ans2 = 18.0/squared2(2+1);
	double ans3 = 18.0/squared3(2+1);
	double ans4 = 18.0/squared4(2+1);

	printf("%f\n", ans1);
	printf("%f\n", ans2);
	printf("%f\n", ans3);
	printf("%f\n", ans4);
}
