// Code for a Pallindrome number.
// A number that reads same Forward and Backward.
#include<stdio.h>

int main(){
    int a,o,r=0,rem;
    printf("Enter any number: ");
    scanf("%d",&a);

    o = a;

    while(a!=0){
        rem = a%10;
        r = r*10 + rem;
        a = a/10;
    }

    if(o==r){
        printf("%d is a Pallindrome number.",o);
    }
    else{
        printf("%d is not a Pallindrome number.",o);
    }

    return 0;

}
