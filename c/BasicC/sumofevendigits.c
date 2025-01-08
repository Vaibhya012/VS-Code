#include<stdio.h>
int main(){
    int n;
    printf("entr a number: ");
    scanf("%d",&n);
    int sum = 0;
    int ld = 0;
    while(n!=0){
        ld=n%10;
        if(n%2==0){
        sum=sum+ld;
        }
        n=n/10;
    }
    printf("The sum of even digits:%d",sum);
    return 0;
}