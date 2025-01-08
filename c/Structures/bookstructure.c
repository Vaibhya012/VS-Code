#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int onOfPages;
    }a,b,c;

    a.price = 200.5;
    a.onOfPages = 450;
    strcpy(a.name,"Visual Studio");

    b.onOfPages = 100;
    strcpy(b.name,"Helper");
    b.price = 20.5;

    printf("%f\n",a.price);
    printf("%s\n",a.name);
    printf("%d\n",a.onOfPages);    
    return 0;
}
