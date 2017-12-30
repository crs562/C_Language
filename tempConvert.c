/*
 ==================================================================================================================================
 Name        : tempConvert.c
 Author      : Chaitanya Shah
 Version     : v1
 Copyright   : 
 Description : Calculating 1 + 2 + 3 + ... + N.
 Style	     : ANSI-style
 ==================================================================================================================================
 */

#include <stdio.h>

main()
{
	float celsius, fahrenheit;

	printf("Enter a Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = ((9*celsius)/5) + 32;

	printf("The temperature %f Celsius equals to %f Fahrenheit.\n", celsius, fahrenheit);
}
