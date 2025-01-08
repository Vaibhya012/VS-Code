#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number: ");
    scanf("&d",x);
    int sum;
    for(int i=1; i<=x; i++){
        sum = i+i;

    }
    printf("%d",sum);
    return 0;    
}