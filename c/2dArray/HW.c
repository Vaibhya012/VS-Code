#include<stdio.h>
int main(){
    int r;
    printf("Enter a number of student: ");
    scanf("%d",&r);
    int arr[r][2];
    for(int i=0; i<r; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}