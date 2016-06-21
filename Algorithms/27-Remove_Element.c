/*
 * Given an array and a value, remove all instances of that value in place and return the new length.
 *
 * Do not allocate extra space for another array, you must do this in place with constant memory.
 *
 * The order of elements can be changed. It doesn't matter what you leave beyond the new length.
 *
 * Example:
 * Given input array nums = [3,2,2,3], val = 3
 *
 * Your function should return length = 2, with the first two elements of nums being 2.
 *
 * Hint:
 *
 * Try two pointers.
 * Did you use the property of "the order of elements can be changed"?
 * What happens when the elements to remove are rare?
 *
 */

#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
	int result = 0;
	int i = 0;
	int j = numsSize-1;

	for(;i<=j;i++){
		if(nums[i]==val){
			result++;
			for(;j>i;j--){
				if(nums[j]==val){
					result++;
				}else{
					int swap = nums[i];
					nums[i] = nums[j];
					nums[j] = swap;
					j--;

					break;
				}
			}
		}
	}

	return (numsSize - result);
}

int main(void){
	int test[] = {3,2,2,3};
	int val = 3;

	int result = removeElement(test, 4, val);

	for(int i=0;i<result;i++){
		printf("%d\n", test[i]);
	}

	return 0;
}
