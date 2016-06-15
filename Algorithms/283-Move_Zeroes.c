/* 
 *  Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
 *
 *  For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].
 *
 *  Note:
 *
 *      You must do this in-place without making a copy of the array.
 *      Minimize the total number of operations.
 *
 */

#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
	int zeroes = 0;

	for(int i=0;i<numsSize-zeroes;){
		if(nums[i]==0){
			for(int j=i;j<numsSize-zeroes-1;j++){
				nums[j]=nums[j+1];
			}
			zeroes++;
		}else{
			i++;
		}
	}

	for(int i=numsSize-1;i>numsSize-zeroes-1;i--){
		nums[i]=0;
	}
}

int main(void){
	int nums[] = {0,1,0,3,12};
	int numsSize = sizeof(nums)/sizeof(int);

	moveZeroes(nums,numsSize);

	for(int i=0;i<numsSize;i++){
		printf("%d ",nums[i]);
	}

	printf("\n");

	return 0;
}
