/*
 * Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.
 *
 * If the last word does not exist, return 0.
 *
 * Note: A word is defined as a character sequence consists of non-space characters only.
 *
 * For example,
 * Given s = "Hello World",
 * return 5. 
 */

#include <stdio.h>
#include <stdbool.h>

int lengthOfLastWord(char* s){
	int result = 0;
	bool flag = false;

	for(int i=0;s[i]!='\0';i++){
		if(s[i]!=' '&&flag){
			result = 1;
			flag = false;
		}else if(s[i]!=' '){
			result++;
		}else{
			flag = true;
		}
	}

	return result;
}

int main(void){
	char test[] = "fuck you"; //whatever you like

	int result = lengthOfLastWord(test);

	printf("%d\n",result);

	return 0;
}
