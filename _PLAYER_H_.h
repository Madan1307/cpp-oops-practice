#ifndef _PLAYER_H__H
#define _PLAYER_H__H
#include <string>
using namespace std;

class Player{
    private:
        static int num_players;
        string name;
        int health;
        int xp;
    public:
        string get_name();
        int get_health();
        int get_xp (); 
        static int get_num_players();
//        static int age;
//constructors         
    Player(string name_val="none",int health_val=0,int xp_val=0);
//copy comstructors
    Player(const Player &source);    
//dsestructors
    ~Player();
    

    
};

#endif // _PLAYER_H__H
