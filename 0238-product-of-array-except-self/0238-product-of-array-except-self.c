/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 #include <stdlib.h>

 int* productExceptSelf(int* nums, int numssize, int* returnsize){
    int* answer= (int*)malloc(numssize*(sizeof(int)));
    *returnsize=numssize;

    int lefthandproduct=1;
    for (int i=0; i<numssize; i++){
        answer[i] = lefthandproduct;
        lefthandproduct *=nums[i];
    }

    int righthandproduct=1;
    for (int i=numssize-1; i>=0; i--){
        answer[i] *= righthandproduct;
        righthandproduct *=nums[i];
    }
    
    return answer;
 }