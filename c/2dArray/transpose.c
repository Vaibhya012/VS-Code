#include<stdio.h>
int main(){
    int r,c;
    printf("Enter a rows: ");
    scanf("%d",&r);
    printf("Enter a columns: ");
    scanf("%d",&c);
    printf("Enter all the elements");
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int brr[c][r];
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            //printf("%d ",arr[j][i]);
            brr[i][j] = arr[j][i];
        }
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}