#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    } pokemon;

    typedef struct legendarypokemon{
        pokemon normal;
        char ability[100];
    } legendarypokemon;

    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn anyone to stone");
    arceus.legend.normal.hp = 80;
    
    return 0;
}