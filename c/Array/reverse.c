#include<stdio.h>
void reverse(int arr[],int si, int ei){ // reverse part of arry
    for(int i=si,j=ei;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
    
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr,2,5);
    // for(int i=1,j=4;i<j;i++,j--){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    // }
    for(int i=0; i<=6; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}  