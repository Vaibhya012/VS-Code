#include<stdio.h>
#include<string.h>
    typedef struct student{
        int rno;
        char name[20];
        char dept[20];
        char course[30];
        int yearOfJoining;
    } student;

void chack(student s1, student s2){

    if(s1.rno==s2.rno) printf("The Department Same");
    else printf("Department not Same");
    return;
}
int main(){
    
    student s1,s2;
    s1.rno = 10;
    strcpy(s1.dept,"Management");
    s2.rno =11;
    strcpy(s2.dept,"Management");

    chack(s1,s2);

    return 0;
}




incopmete