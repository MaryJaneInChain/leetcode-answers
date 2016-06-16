/*
 *
 * Given a non negative integer number num. For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation and return them as an array.
 *
 * Example:
 * For num = 5 you should return [0,1,1,2,1,2].
 *
 * Follow up:
 *
 * 	   It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
 *     Space complexity should be O(n).
 *     Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.
 *
 */

#include <stdio.h>
#include <stdlib.h>

/**
 *
 * Return an array of size *returnSize.
 *
 * Note: The returned array must be malloced, assume caller calls free().
 *
 */
int* countBits(int num, int* returnSize){
	int* result = malloc(sizeof(int) * (num+1));

	for(int i=0;i<=num;i++){
		int m = 0;
		int n = i;
		for(int j=0;j<sizeof(int)*8;j++){
			m += n&1;
			n >>= 1;
		}
		result[i] = m;
	}

	*returnSize = (num+1);

	return result;
}

int main(void){
	int test = 666; // whatever you like
	int* size = malloc(sizeof(int));
	int* result = countBits(test, size);

	for(int i=0;i<*size;i++){
		printf("%d ", result[i]);
	}

	return 0;
}
