#include <stdio.h>
main()
{
	int first_num, second_num, temp;

	/* Now read inter values */
	printf("Enter a first integer number: ");
	scanf("%d", &first_num);
	printf("Enter a second integer number: ");
	scanf("%d", &second_num);

	/* Ensure that first_num is the larger of first_num and second_num, if not exchange
	   first_num with second_num */
	if(first_num < second_num)
	{
		temp = first_num;
		first_num = second_num;
		second_num = temp;
	}

	/* now first_num is >= second_num */
	printf("GCD of %d, %d is ", first_num, second_num);
	while(!(second_num == 0))
	{
		temp = first_num;
		first_num = second_num;
		second_num = temp % second_num;
	}

	printf("%d\n", first_num);
}
