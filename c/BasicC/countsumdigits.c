#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum = 0;
    int ld = 0;
    while(n!=0){
        ld = n%10;
        sum = sum + ld;
        n + n/10;
    }
    printf("The sum of digits is %d",sum);
    return 0;
}