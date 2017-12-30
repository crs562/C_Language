/*
 ==================================================================================================================================
 Name        : Nadd.c
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
	int N, i, mul = 1;

	printf("Enter a number N: ");
	scanf("%d", &N);

	for(i = 1; i <= N; i++)
		mul = mul * i;

	printf("Factorial of %d is %d.\n", N, mul);
}
