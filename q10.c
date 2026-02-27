// Code for Happy  Number.

/*
For Example: Input: n = 19
             Output: true
Explanation: 1**2 + 9**2 = 82
             8**2 + 2**2 = 68
             6**2 + 8**2 = 100
             1**2 + 0**2 + 0**2 = 1
*/

#include<stdio.h>

int main(){
    int n,i,a,sum,temp;
    printf("Enter a Number: ");
    scanf("%d",&n);

    temp = n;

    do{
        sum = 0;

        while(temp > 0){
            a = temp%10;
            sum = sum + (a*a);
            temp = temp/10;
        }
        temp = sum;
    }

    while(temp!=1 && temp != 4);

    /*
    4 is used because all non-happy numbers eventually fall into a loop
    that reaches 4 (4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4)
    So if we reach 4, the number is not a Happy Number.
    */
   
    if(temp == 1){
        printf("%d is a Happy Number.",n);
    }
    else{
        printf("%d is Not a Happy Number.",n);
    }
    return 0;
}