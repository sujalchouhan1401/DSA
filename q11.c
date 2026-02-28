//Code for Power of Two.

#include<stdio.h>
#include<stdbool.h>

int main(){
    int a;
    printf("Enter any Number: ");
    scanf("%d",&a);

    if(a>0 &&(a&(a-1)) == 0){
        printf("%d is a Power of Two.\n",a);
    } else{
        printf("%d is NOT a Power of Two.\n", a);
    }

    return 0;

}
