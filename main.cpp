#include<iostream>
#include"character.h"
#include"opponent.h"
#include"minion.h"


using namespace std;

int main() {
    character player;
    opponent enemy;
    minion minion;
    player.health = 10;
    enemy.health = 10;
    minion.health = 10;
    string play = "y";
    string choice;
    srand(time(0));
    cout<<"Dice Dueling"<<endl;
    cout<<"Higheest Number Wins!"<<endl;
    while (true) {
        bool minion_spawn = enemy.spawn_minion();
        cout<<"Would you like to roll the dice? (y/n q to quit): ";
        cin>>ws;
        getline(cin,choice);
        if (choice == "y") {
            int player_roll = player.roll_dice();
            int enemy_roll = enemy.roll_dice();
            int minion_roll = minion.roll_dice();
            cout<<"Player Health: "<<player.health<<endl;
            cout<<"Enemy Health: "<<enemy.health<<endl;
            if (minion_spawn == true) {
                cout<<"Minion Health: "<<minion.health<<endl;
            }
            if (player_roll > enemy_roll) {
                cout<<"Enemy Takes Damage!"<<endl;
                enemy.health --;
            }
            else if (player_roll < enemy_roll) {
                cout<<"You take damage!"<<endl;
                player.health --;
            }
            if (minion_spawn == true and player_roll > minion_roll) {
                cout<<"minion takes damage!";
                minion.health --;
            }
            else if (minion_spawn == true and player_roll < minion_roll) {
                cout<<"You take damage!";
                player.health --;
            }
        }
        else if (choice == "q") {
            break;
        }
        if (enemy.health == 0 and minion.health == 0) {
            cout<<"You win!"<<endl;
            cout<<"Would you like to play again? (y/n): ";
            cin>>ws;
            getline(cin,choice);
            if (choice == "y") {
                player.health = 10;
                enemy.health = 10;
                minion.health = 10;

            }
            else {
                break;
            }
        }
    }
    return 0;
}
