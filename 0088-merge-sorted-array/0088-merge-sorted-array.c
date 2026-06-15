#include <stdio.h>

int merge(int* nums1, int nums1size, int m, int* nums2, int nums2size, int n){
    int i=m-1; //index pointer for nums1 array from the last position
    int j=n-1; //index pointer for nums2 array from the last position
    int k=m+n-1; //index pointer for nums1, the final array from the last position

    while(i>=0 && j>=0){ //while both the arrays have elements
        if (nums1[i]>nums2[j]){ 
            nums1[k]=nums1[i];
            i--; //pushes nums1 index pointer backwards if its bigger
        }
        else{
            nums1[k]=nums2[j];
            j--; //pushes nums2 index pointer backwards if its bigger
        }
        k--; //pushes final nums1 index pointer backwards
    }
    while (j>=0){ //incase the elements in nums1 run out first
        nums1[k]=nums2[j];
        j--;
        k--;
    }
    return 0; //the return type is int
}