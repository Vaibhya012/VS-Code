#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {2,4,12,1,5,9,-7,3};
    int min = INT_MAX;
    for(int i=0; i<=6; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d ",min);
    return 0;
} 