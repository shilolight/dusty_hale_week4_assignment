#include<iostream>
#include<cstdlib>
#include"character.h"

using namespace std;


character::character() {
    int health;
}
int character::roll_dice() {
    int number = rand()%100;
    return number;
}
