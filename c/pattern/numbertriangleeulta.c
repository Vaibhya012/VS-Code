#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    int z=n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=z;j++){
            printf("%d ",j);
            }
        printf("\n");
         z--;
    }

    return 0;
}