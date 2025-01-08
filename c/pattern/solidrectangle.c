#include<stdio.h>
int main(){
    int n,m;
    printf("Enter Number of rows: ");
    scanf("%d",&n);
    printf("Enter Number of columns: ");
    scanf("%d",&m);
    for(int i=1; i<=n; i++){             //oter loop -> no of lines
        for(int i=1; i<=m; i++){         //inner loop -> no of stars in each lines
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}