#ifndef BUTTON_HPP
#define BUTTON_HPP
#include <SFML/Graphics.hpp>

class Button{


    public:
        Button();
        ~Button();

    private:
        sf::RectangleShape buttonshape;
        sf::Font font;
        sf::Text text;
        



    }

#endif