/*
 * Given a non-negative number represented as an array of digits, plus one to the number.
 *
 * The digits are stored such that the most significant digit is at the head of the list.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of size *returnSize.
 *
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* plusOne(int* digits, int digitsSize, int* returnSize) {
	int i=0;    
	for(;i<digitsSize;i++){
		if(digits[i]!=9)break;
	}			    
	
	if(i==digitsSize){
		int *result=calloc(digitsSize+1, sizeof(int));
		result[0]=1;
		*returnSize=digitsSize+1;
		return result;
	}else{
		int *result=malloc(sizeof(int)*digitsSize);
		for(i=0;i<digitsSize;i++){
			result[i] = digits[i];
		}
		i=i-1;
		result[i]+=1;
		for(;i>0;i--){
			if(result[i]==10){
				result[i-1]+=1;
				result[i]=0;
			}
		}	
		*returnSize=digitsSize;
		return result;
	}
}

int main(void){
	int test[]={1,0,8,9};
	int *returnSize=malloc(sizeof(int));
	int *result;

	result=plusOne(test, 4, returnSize);

	for(int i=0;i<*returnSize;i++){
		printf("%d\n", result[i]);
	}

	free(returnSize);
	free(result);
	
	return 0;
}
