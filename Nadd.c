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
	int N, i, sum = 0;
	printf("Enter a number N: ");
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
		sum = sum + i;
	printf("Total sum of %d numbers is %d.\n", N, sum);
}
