#include<stdio.h>
typedef int* pointer;
int main(){
    int x=8, y=5;
    pointer a=&x, b=&y; //int* x and int y
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}