/*
 * Given an integer, write a function to determine if it is a power of three. 
 */

#include <stdio.h>
#include <stdbool.h>

bool isPowerOfThree(int n){
	if(n<1)return false;

	if(n%3!=0){
		if(n/3==0){
			if(n%3==1){
				return true;
			}else{
				return false;
			}
		}else{
			return false;
		}
	}else{
		return isPowerOfThree(n/3);
	}
}

int main(void){
	int test = 38; //whatever you like
	bool result = isPowerOfThree(test);
	printf("%d\n",result);

	return 0;
}
