#include "_PLAYER_H_.h"
int Player::num_players{0};
//int Player::age{0};
string Player::get_name(){
        return name;
    }
int Player::get_health(){
    return health;
    }
int Player::get_xp (){
    return xp;
    }


Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
        ++num_players;
}

Player::Player(const Player &source)
    :name{source.name},health{source.health},xp{source.xp}{
}
Player::~Player(){
    --num_players;
}

int Player::get_num_players(){
    return num_players;
}