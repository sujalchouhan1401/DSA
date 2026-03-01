// Code for Ugly Number.
//An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.


#include <stdio.h>

int main(){
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("%d is NOT an Ugly Number\n", n);
        return 0;
    }

    int original = n;

    while(n%2 == 0) {
        n = n/2;
    }

    while(n%3 == 0) {
        n = n/3;
    }

    while(n%5 == 0) {
        n = n/5;
    }

    if(n == 1){
        printf("%d is an Ugly Number\n", original);
    } 
    else{
        printf("%d is NOT an Ugly Number\n", original);
    }

    return 0;
}