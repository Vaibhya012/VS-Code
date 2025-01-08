#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;  // temp = a
    *x = *y; // a = b
    *y = temp;  // b = temp
    return;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int b;
    printf("Enter b number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("A number:%d\n",a);
    printf("B number:%d",b);
    return 0;
}