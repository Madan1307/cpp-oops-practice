#include<iostream>
#include "_PLAYER_H_.h"
using namespace std;
void display_active_players(){
    cout << "avtive players" << Player::get_num_players() << endl;
    }
int main(){
   display_active_players();
   Player hero{"hero"};
   display_active_players();
   {
    Player madan{"madan"}; 
    display_active_players();  
    }
   display_active_players();
    
    Player *enemy= new Player{"bhuvana",100,100};
    display_active_players();
    delete enemy;
    display_active_players();
    return 0;
}