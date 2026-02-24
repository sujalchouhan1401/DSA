//Code for Transpose Matrix.

#include<stdio.h>

int main(){
    int a,b,i,j;
    printf("Enter the Row of the Matrix: ");
    scanf("%d",&a);

    printf("Enter the Column of the Matrix: ");
    scanf("%d",&b);

    int matrix[a][b];

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Enter [%d][%d] Element: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("The Matrix:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("The Transpose of the Matrix:\n");
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}