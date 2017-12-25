/*
 ================================================================================================================================
 Name        : Rearranged.c
 Author      : Chaitanya Shah
 Version     : v1
 Copyright   : 
 Description : Problem from MIT 6.087, IAP 2010, Problem Set 1, Problem 1.4
               The following lines of code, when arranged in the proper sequence, output the simple message
               “All your base are belong to us.”
               1. return 0;
               2. const char msg[] = MSG1;
               3. }
               4. #define MSG1 "All your base are belong to us!"
               5. int main(void) {
               6. #include <stdio.h>
               7. puts(msg);
               Write out the proper arrangement (line numbers are sufficient) of this code.
 Style       : ANSI-style
 ================================================================================================================================
 */

#include<stdio.h>

#define MSGI "All your base are belong to us!"

int main(void){
	const char msg[] = MSGI;
	puts(msg);
	return 0;
}
