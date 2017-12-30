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
	int first_num, second_num, temp, loop_var;
	
	printf("Enter a first integer number: ");
	scanf("%d", &first_num);
	printf("Enter a second integer number: ");
	scanf("%d", &second_num);
	
	/* Finding the smallest number */
	if(first_num < second_num)
	{
		temp = second_num;
		second_num = first_num;
		first_num = temp;
	}
	
	/* For each loop_var, if loop_var divides first_num and second_num, then loop_var is the GCD of first_num and second_num. */
	for(loop_var = second_num; loop_var >= 1; loop_var--)
	{
		if(((first_num % loop_var) == 0) && ((second_num % loop_var) == 0))
			break;
	}
	printf("GCD(%d, %d) = %d\n", first_num, second_num, loop_var);
}
