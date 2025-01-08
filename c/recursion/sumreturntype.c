#include<stdio.h>
int sum(int n){
    if(n==1 || n==0)  return 1;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact = sum(n);
    printf("The sum is:%d",fact);
    return 0;
    }