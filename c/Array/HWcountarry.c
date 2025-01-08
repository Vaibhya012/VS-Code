#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {9,2,8,4,5,6,7};
    int count = 0;
    int x=4;
    for(int i=0; i<=6; i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("%d ",count);
    return 0;
} 