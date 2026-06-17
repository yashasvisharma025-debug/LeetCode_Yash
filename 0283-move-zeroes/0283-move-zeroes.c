#include <stdio.h>

void moveZeroes(int* nums, int numsSize){
    int writer=0;

    for (int scanner=0; scanner<numsSize; scanner++){
        if (nums[scanner]!=0){
            int temp=nums[scanner];
            nums[scanner]=nums[writer];
            nums[writer]=temp;

            writer++;
        }
    }
}