#include<stdio.h>
int main(){
    int w,x,y,z;
    printf("enter a 1st number: ");
    scanf("%d",&w);
    printf("enter a 2nd number: ");
    scanf("%d",&x);
    printf("enter a 3th number: ");
    scanf("%d",&y);
    printf("enter a 4th number: ");
    scanf("%d",&z);
    if(w>x && w>y && w>z)
    printf("%d is greatest",w);
    else if(x>w && x>y && x>z)
    printf("%d is greatest",x);
    else if(y>w && y>x && y>z)
    printf("%d is greatest",y);
    else
    printf("%d is greatest",z);
    return 0;
}
