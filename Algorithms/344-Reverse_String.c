/*
 * Write a function that takes a string as input and returns the string reversed.
 *
 * Example:
 * Given s = "hello", return "olleh". 
 */

#include <stdio.h>
#include <stdlib.h>

char* reverseString(char* s){
	int n = 0;
	while(*(s+n++) != '\0'){}

	char *result = (char *)malloc(sizeof(char) * n);
	for(int i=0 ; i < (n-1) ; i++){
		result[i] = s[n-i-2];
	}

	result[n-1] = '\0';

	return result;
}

int main(void){
	char test[] = "Hello World!";

	char *result = reverseString(test);

	printf("%s\n", result);

	return 0;
}
