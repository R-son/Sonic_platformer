#include <iostream>
#include <tuple>
#include "SFML/Graphics.hpp"
#include "Item.hpp"

const int max_life = 99;
const float acceleration_speed = 0.046875;
const float deceleration_speed = 0.5;
const float friction_speed = 0.046875;
const int top_speed = 6;

enum chaos_emerald {GREEN, OCEAN, YELLOW, GREY, SKY, PURPLE, RED};

class Character
{
    protected:
        int _life;
        int _rings;
        double _score;
        float _speed;
        bool grounded;
        bool is_crushed;
        bool is_rolling;
        std::tuple<float, float> respawn_point;
        sf::Time iframes;
        Item *_item;
    // MOVEMENTS
    void run();
    void jump();
    void roll();
    void bounce();
    // ITEMS AND RINGS
    void one_up();
    void add_ring();
    // GET_HIT
    void die();
    void get_hit();
    void lose_rings();
    //SCRIPTED
    void victory();
    public:
        Character();
        ~Character();
        float get_speed();
};