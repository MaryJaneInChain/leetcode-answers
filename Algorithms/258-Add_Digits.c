/* 
 * Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
 *
 * For example:
 *
 * Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
 *
 * Follow up:
 * Could you do it without any loop/recursion in O(1) runtime? 
 */

#include <stdio.h>

int addDigits(int num){
	if(num<10)return num;
	return addDigits(num%10+addDigits(num/10));
}

int main(void){
	int test = 38; //whatever you like
	test = addDigits(test);
	printf("%d\n",test);

	return 0;
}
