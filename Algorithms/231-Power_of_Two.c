/*
 * Given an integer, write a function to determine if it is a power of two. 
 */

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n){
	if(n<1)return false;

	if(n%2==1){
		if(n/2==0){
			return true;
		}else{
			return false;
		}
	}else{
		return isPowerOfTwo(n/2);
	}
}

int main(void){
	int test = 38; //whatever you like
	bool result = isPowerOfTwo(test);
	printf("%d\n",result);

	return 0;
}
