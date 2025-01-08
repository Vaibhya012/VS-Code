#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b;
    printf("Enter b number: ");
    scanf("%d",&b);
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;
    a = a+b; // without extra variable
    b = a-b;
    a = a-b;
    printf("A number:%d\n",a);
    printf("B number:%d",b);
    return 0;
}