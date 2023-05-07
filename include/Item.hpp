#include <iostream>
#include <SFML/Graphics.hpp>

enum item_type {RINGS, SHIELD, SUPER_SHOES, INVINCIBLE, ONE_UP};

class Item
{
    protected:
        item_type _item;
        sf::Time item_timer;
    public:
        Item() {};
        ~Item() {};
        virtual void pick_up();
        sf::Time get_timer() {return item_timer;};
        item_type get_type() {return _item;};
};