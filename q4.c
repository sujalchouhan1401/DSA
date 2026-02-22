//Code for Removing Duplicates from Sorted Array.

#include <stdio.h>

int removeDuplicates(int nums[], int numsSize){
    if(numsSize == 0){
        return 0;
    }

    int i=0;

    for(int j=1; j<numsSize; j++){
        if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
        }
    }

    return i+1;
}

int isSorted(int nums[], int numsSize){
    for(int i=1; i<numsSize; i++){
        if(nums[i] < nums[i-1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Invalid array size!\n");
        return 0;
    }

    int nums[n];

    for(int i=0; i<n; i++){
        printf("Enter %d Element: ",i+1);
        scanf("%d", &nums[i]);
    }

    if(!isSorted(nums, n)){
        printf("Error: Array is not in non-decreasing order!\n");
        return 0;
    }

    int newSize = removeDuplicates(nums, n);

    printf("Number of unique elements: %d\n", newSize);
    printf("Array after removing duplicates:");

    for(int i=0; i<newSize; i++){
        printf("%d ",nums[i]);
    }

    return 0;
}