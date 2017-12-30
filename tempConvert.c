#include <stdio.h>

main()
{
	float celsius, fahrenheit;

	printf("Enter a Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = ((9*celsius)/5) + 32;

	printf("The temperature %f Celsius equals to %f Fahrenheit.\n", celsius, fahrenheit);
}
