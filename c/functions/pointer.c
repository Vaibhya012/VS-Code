#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    int** y=&x;
    printf("%d\n",a);   //%d se address print hota hai!
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0; 
}