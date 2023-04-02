#include<iostream>
#include"opponent.h"

using namespace std;

opponent::opponent() {
}
bool opponent::spawn_minion() {
    if (health <= 5) {
        return true;
    }
}
