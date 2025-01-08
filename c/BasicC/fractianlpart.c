#include<stdio.h>
int main(){
    float x;
    printf("enter a value: ");
    scanf("%f",&x);
    int y=x;
    printf("%d",y);
    float z=x-y;
    printf("%f",z);
    return 0;
}