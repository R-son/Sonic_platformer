#include <iostream>
#include <SFML/Graphics.hpp>
#include "Character.hpp"

class Player{
    int _id;
    private:
        void keyboard();
        void controller(int);
    public:
        Player();
        void identify_controller();
        void get_player_input();
};