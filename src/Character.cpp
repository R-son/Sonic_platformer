#include "Character.hpp"

Character::Character() : _speed(0), grounded(true), is_rolling(false) {}

Character::~Character() {}

float Character::get_speed()
{
    if (_speed == 0 && is_rolling)
        is_rolling = false;
    return _speed;
}

void Character::one_up() {_life += 1;}

void Character::add_ring()
{
    _rings += 1;
    if (_rings == 100)
        one_up();
}

void Character::die() {_life -= 1;}

void Character::get_hit()
{
    if (is_crushed || ((!_item || _item->get_type() != SHIELD || _item->get_type() != INVINCIBLE) && _rings == 0))
        die();
    else if (_item->get_type() == SHIELD)
        free(_item);
    else
        lose_rings();
}

void Character::lose_rings()
{
    for (int i = 0; i < _rings && _rings < 32; i++);
}

void Character::victory() {}