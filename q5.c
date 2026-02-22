// Code for returning the square root of x rounded down to the nearest integer.

#include<stdio.h>

int main(){
    int x;
    printf("Enter a positive integer: ");
    scanf("%d",&x);

    if(x<0){
        printf("Please, Enter a Positive Number!!");
    }

    else{
        int i=0;

        while(i*i <= x){
            i++;
        }

        printf("Square root (rounded down) = %d", i - 1);
    }

    return 0;
}