#include<stdio.h>
int main(){
    int Ram,Shyam,Ajay;
    printf("enter Ram age: ");
    scanf("%d",&Ram);
    printf("enter Shyam age: ");
    scanf("%d",&Shyam);
    printf("enter Ajay age: ");
    scanf("%d",&Ajay);
    if(Ram<Shyam && Ram<Ajay)
    printf("Ram is yougest");
    else if(Shyam<Ram && Shyam<Ajay)
    printf("Shyam is yougest");
    else if(Ajay==Ram && Ajay==Shyam && Ram==Shyam)
    printf("Ram,Shyam and Ajay is same Age");
    else
    printf("Ajay is yougest");
    return 0;
}