#include<stdio.h>
int main(){
    int r,c;
    printf("Enter a rows: ");
    scanf("%d",&r);
    printf("Enter a columns: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}