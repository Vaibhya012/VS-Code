#include<stdio.h>
int stair(int n){
    if(n==1 || n==2) return n;
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Number of Ways:%d", stair(n));
    return 0;
    }