/*
 ============================================================================
 Name        : Hello.c
 Author      : Chaitanya Shah
 Version     : v1
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h> /* basic I/O facilities */

/* Preprocessor macros begin with # character */
/* #define can take arguments and be treated like a function */
#define msg1 "Hello, World!"

/* The main() function */
int main(void) /* entry point */
{
	/* write message to console */
	printf("Hello, World!\n");

	/* Alternatively, store the string in a variable first */
	const char msg[] = "Hello, World!";

	/* write message to console */
	puts(msg);
	
	return 0; /* exit (0 => success) */
}
