#include<stdio.h>
void increasing(int n){
    if(n==0)  return;  //base case
    printf("%d\n",n);   // code
    increasing(n-1);  // call
    printf("%d\n",n);   // code
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n); 
    increasing(n);
    return 0;
    }