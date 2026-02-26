// Cosde for Climbing Stairs.

#include<stdio.h>

int main(){
    int a;
    printf("Enter the number of stairs to climb(0-45): ");
    scanf("%d",&a);

    if(a<0 || a>45){
        printf("Invalid Number!!");
    }
    else if(a == 0){
        printf("Number of ways: 0");
    }
    else if(a == 1){
        printf("Number of ways: 1");
    }
    else if(a == 2){
        printf("Number of ways: 2");
    }
    else{
        int prev2 = 1;
        int prev1 = 2;
        int current;

        for(int i=3; i<=a; i++){
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }

        printf("Number of ways: %d", prev1);
    }

    return 0;
}