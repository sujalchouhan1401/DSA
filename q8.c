// Code for Two Sum.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,target,i,j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++){
        printf("Enter %d index element: ",i);
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int found = 0;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                printf("Indices: %d %d\n", i, j);
                found = 1;
            }
        }
    }

    if(!found){
        printf("No valid pair found\n");
    }

    return 0;
}