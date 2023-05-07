#include "Player.hpp"

void Player::identify_controller()
{
    for (int i = 0; i < 8; i++) {
        if (!sf::Joystick::isConnected(i)) {
            _id = i;
            return;
        }
    }
    _id = -1;
}

void Player::get_player_input()
{
    if (_id == -1)
        keyboard();
    else
        controller(_id);
}

