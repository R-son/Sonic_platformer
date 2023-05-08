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
        this->one_up();
}

void Character::die() {_life -= 1;}

void Character::get_hit()
{
    if (is_crushed || ((!_item || _item->get_type() != SHIELD || _item->get_type() != INVINCIBLE) && _rings == 0))
        this->die();
    else if (_item->get_type() == SHIELD)
        this->lose_item();
    else
        this->lose_rings();
}

void Character::lose_rings()
{
    for (int i = 0; i < _rings && _rings < 32; i++);
    _rings = 0;
}

void Character::lose_item() {free(_item);}



void Character::pick_item(Item new_item)
{
    // if ()
    switch (new_item.get_type())
    {
    case RINGS:
        this->add_ring();
        break;
    case SHIELD:
        // if (this->get_item() == )
    case SUPER_SHOES:
    case INVINCIBLE:
    case ONE_UP:
        this->one_up();
    default:
        exit(84);
        break;
    }
}

void Character::victory() {}