/*
 *  Write a program to check whether a given number is an ugly number.
 *
 *  Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.
 *
 *  Note that 1 is typically treated as an ugly number. 
 */

#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target){
	int result = 0;

	for(;result<=numsSize;result++){
		if(nums[result]>=target)break;
	}

	return result;
}

int main(void){
	int target = 8; //whatever you like
	int nums[] = {0,1,3,5,8};

	int result = searchInsert(nums,5,target);

	printf("%d\n",result);

	return 0;
}
