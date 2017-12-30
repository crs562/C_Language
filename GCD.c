/*
 ==================================================================================================================================
 Name        : GCD.c
 Author      : Chaitanya Shah
 Version     : v1
 Copyright   : 
 Description : Find the greatest common divisor (GCD) of two positive integers.
 Style	     : ANSI-style
 ==================================================================================================================================
 */
 
 #include <stdio.h>
main()
{
	int a, b, t, k;
	printf("Enter a first integer number: ");
	scanf("%d", &a);
	printf("Enter a second integer number: ");
	scanf("%d", &b);
	if(a < b)
	{
		t = b;
		b = a;
		a = t;
	}
	for(k = b; k >= 1; k--)
	{
		if(((a % k) == 0) && ((b % k) == 0))
			break;
	}
	printf("GCD(%d, %d) = %d\n", a, b, k);
}
