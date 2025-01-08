#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%5==0){
        if(n%3==0)
        printf("The number is divisible 3 and 5");
        else
        printf("The number is not divisible 3 and 5");
    }
    else{
     printf("The number is not divisible 3 and 5");   
    }
    return 0;
}