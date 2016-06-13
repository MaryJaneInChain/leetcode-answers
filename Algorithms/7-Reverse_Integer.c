/*
 * Reverse digits of an integer.
 *
 * Example1: x = 123, return 321
 * Example2: x = -123, return -321 
 *
 * Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!
 *
 * If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.
 *
 * Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?
 *
 * For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_INTEGER 2147483647
#define MIN_INTEGER -2147483648

int reverse(int x){
	long int result = 0;
	bool flag = false;

	if(x<0){
		x = -x;
		flag = true;
	}

	for(; x!=0 ; x/=10){
		result = result * 10 + x % 10;
	}

	if(flag){
		result = -result;
	}

	if(result>MAX_INTEGER || result<MIN_INTEGER){
		return 0;
	}

	return (int)result;
}

int main(void){
	int test = -9273;

	int result = reverse(test);

	printf("%d\n", result);

	return 0;
}
