#include<stdio.h>
int main(){
    struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    struct pokemon charizard;
    charizard.attack = 80;
    charizard.hp = 60;
    charizard.speed = 70;
    charizard.tier = 's';

    printf("%d",pikachu.hp);
    return 0;
}