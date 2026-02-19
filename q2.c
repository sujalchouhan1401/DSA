//Code for a Monotonic Array.
//An array is monotonic if it is either increasing or decreasing.

#include<stdio.h>
#include<stdbool.h>

bool isMonotonic(int* nums, int numsSize){
    int inc=1, dec=1, i;

    for(i=1; i<numsSize; i++){
        if(nums[i] > nums[i-1]){
            dec = 0;
        }
        else if(nums[i] < nums[i-1]){
            inc = 0;
        }
    }

    return inc || dec;
}

int main(){
    int a,i;
    printf("Enter the Size of the Array: ");
    scanf("%d",&a);

    int arr[a];

    for(i=0;i<a;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    if(isMonotonic(arr, a)){
        printf("Array is Monotonic\n");
    } 
    else{
        printf("Array is not Monotonic\n");
    }
    
    return 0;
}