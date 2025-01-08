#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d",&m);
    printf("Enter no of columns 1st matrix: ");
    scanf("%d",&n);
    int a[m][n];
    printf("\nEnter elements 1st matrix: ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d",&p);
    printf("Enter no of columns 2nd matrix: ");
    scanf("%d",&q);
    int b[p][q];
    printf("\nEnter elements 2nd matrix: ");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf("%d",&b[i][j]);
        }
    }
    
    if(n!=p) printf("The matrix Cannot be multiplied");
    else{
        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                // i row of a and j column of b
                res[i][j] = 0;
                for(int k=0; k<n; k++){
                res[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        printf("\nResult:\n");
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
            printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}