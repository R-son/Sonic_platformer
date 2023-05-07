#include "Character.hpp"

Character::Character() : _speed(0), grounded(true), is_rolling(false) {}

Character::~Character() {}

float Character::get_speed()
{
    if (_speed == 0 && is_rolling)
        is_rolling = false;
    return _speed;
}

void Character::get_hit()
{
    if (_rings == 0)
        die();
    else
        lose_rings();
}

void Character::die() {_life -= 1;}

void Character::one_up() {_life += 1;}

void Character::add_ring()
{
    _rings += 1;
    if (_rings == 100)
        one_up();
}