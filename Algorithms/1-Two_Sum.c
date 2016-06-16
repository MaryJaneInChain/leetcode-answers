/*
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 *
 * You may assume that each input would have exactly one solution.
 *
 * Example:
 *
 * Given nums = [2, 7, 11, 15], target = 9,
 *
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target){
	int* twoSum = malloc(sizeof(int) * 2);

	for(int i=0;i<numsSize;i++){
		for(int j=i+1;j<numsSize;j++){
			if(nums[i]+nums[j]==target){
				twoSum[0] = i;
				twoSum[1] = j;

				return twoSum;
			}
		}
	}
}

int main(void){
	int test[] = {4,2,3};

	int* result = twoSum(test, 3, 6);

	printf("[%d,%d]\n", *result, *(result+1));

	return 0;
}
