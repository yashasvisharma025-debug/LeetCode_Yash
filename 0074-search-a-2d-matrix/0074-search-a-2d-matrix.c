#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixsize, int* matrixcolsize, int target){
    if (matrixsize==0 || matrixcolsize[0]==0){
        return false;
    }
    int rows= matrixsize;
    int cols= matrixcolsize[0];

    int low=0;
    int high=(rows*cols)-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        int midvalue=matrix[mid/cols][mid%cols];

        if (midvalue==target){
            return true;
        }
        else if(midvalue<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return false;
}