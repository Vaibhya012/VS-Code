#include<stdio.h>
int main(){
    int r;
    printf("enter a number: ");
    scanf("%d",&r);
    float v=4*3.14*r*r*r/3;
    printf("the volume of:%f",v);
    return 0;
}