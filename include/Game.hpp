#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

enum ZONE {GREEN_HILL, MARBLE, SPRING_YARD, LABYRINTH, STAR_LIGHT, SCRAP_BRAIN, FINAL};

class Zone
{
    private:
        int id;
        std::string zone_name;
        sf::RenderWindow *window;
    public:
        Zone(ZONE);
        ~Zone();
};