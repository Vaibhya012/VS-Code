#include<stdio.h>
int main(){
    int n;
    printf("enter a nuber: ");
    scanf("%d",&n);
    if(99<n && 1000>n)
    printf("three digit number");
    else
    printf("Not three digit number");
    return 0;
}