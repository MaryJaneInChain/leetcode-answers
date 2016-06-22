/*
 * Related to question Excel Sheet Column Title
 *
 * Given a column title as appear in an Excel sheet, return its corresponding column number.
 *
 * For example:
 *
 *     A -> 1
 *     B -> 2
 *     C -> 3
 *     ...
 *     Z -> 26
 *     AA -> 27
 *     AB -> 28 
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int titleToNumber(char* s){
	int length = strlen(s);
	int result = 0;

	for(int i=0;length-i>0;i++){
		result+=(s[length-i-1]-'@')*pow(26,i);
	}

	return result;
}

int main(void){
	char test[] = "ABC"; //whatever you like

	int result = titleToNumber(test);

	printf("%d\n", result);

	return 0;
}
