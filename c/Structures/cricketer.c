#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        char name[15];
        int age;
        int noOfMatches;
        float average;
    } pokemon;

    pokemon arr[3];

    for(int i=0; i<3;i++){
        scanf("%s",arr[i].name);
        scanf("%d\n",&arr[i].age);
        scanf("%d\n",&arr[i].noOfMatches);
        scanf("%f\n",&arr[i].average);
    }

    for(int i=0; i<3;i++){
        printf("%s\n",arr[i].name);
        printf("%d\n",arr[i].age);
        printf("%d\n",arr[i].noOfMatches);
        printf("%f\n",arr[i].average);
    }

    return 0;
}