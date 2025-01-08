#include<stdio.h>
int main(){
    int arr[5] = {1,1,2,1,1};
    printf("%p ",&arr[0]);
    printf("%p ",&arr[1]);
    printf("%p ",&arr[2]);
    printf("%p ",&arr[3]);
    printf("%p ",&arr[4]);
    return 0;
}