#include <stdio.h>

//binary search
int searchInsert(int* num, int numsize, int target){
    int low=0;
    int high=numsize-1;
    while (low<=high){
        int mid=low+(high-low)/2;

        if (num[mid]==target){
            return mid;
        }
        else if (num[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}