/*
 * Given a positive integer, return its corresponding column title as appear in an Excel sheet.
 *
 * For example:
 *
 *     1 -> A
 *     2 -> B
 *     3 -> C
 *     ...
 *     26 -> Z
 *     27 -> AA
 *     28 -> AB
 */

#include <stdio.h>
#include <stdlib.h>

char* convertToTitle(int n){
	int length = 1;
	int num = n;

	while(num/26>0||num%26>0){
		length++;

		num = (num-1)/26;
	}

	char* result = malloc(sizeof(char) * length);
	result[length-=1] = '\0';

	while(length>0){
		if(n%26){
			result[length-=1] = n%26+'@';
			n/=26;
		}else{
			result[length-=1] = 'Z';
			n = n/26-1;
		}
	}

	return result;
}

int main(void){
	int test = 38; //whatever you like

	char* title = convertToTitle(test);

	printf("%s\n", title);

	return 0;
}
