#include<stdio.h>

int main(){
    int n,m,i,j;
    int Toep = 1;
    printf("Enter the Number of the Rows: ");
    scanf("%d",&n);
    printf("Enter the Number of the Columns: ");
    scanf("%d",&m);

    int Matrix[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter the Value of[%d][%d]: ",i+1,j+1);
            scanf("%d",&Matrix[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",Matrix[i][j]);
        }
        printf("\n");
    }

    for(i=1;i<n;i++){
        for(j=1;j<m;j++){
            if(Matrix[i][j] != Matrix[i-1][j-1]){
                Toep = 0;
                break;
            }
        }
        if(Toep == 0){
            break;
        }
    }

    if(Toep == 1){
        printf("\nThe above Matrix is Toeplitz.\n");
    }
    else{
        printf("\nThe above Matrix is Not Toeplitz.\n");
    }

    return 0;
}