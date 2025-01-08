#include<stdio.h>
int main(){
    void fun();    //prototype
    fun();
    return 0;
}
void fun(){
    printf("Hello");
}