#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    } date;

    date a,b;
    a.day=2;
    a.month=5;
    a.year=2002;

    b.day=11;
    b.month=7;
    b.year=2023;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false; 

    if(flag == true) printf("The date are Same");
    else printf("The date are Different");

    return 0;
}