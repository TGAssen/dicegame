#include "Playerlist.hpp"
#include "Player.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>



void gameLoop(Playerlist& _pl,std::string& _p1, std::string& _p2){
    _pl.addScore(_p1,5);
    //std::cout<< _pl;
    _pl.addScore(_p1,10);
    std::cout<< _pl ;
    _pl.addScore(_p2,20);
    std::cout<< _pl;
    _pl.remPlayer(_p1);
//    _pl.remPlayer(_p2);

    

}


int main (){
    sf::RenderWindow window(sf::VideoMode(800,600), "DiceGame");
    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    while (window.isOpen()){
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }

        window.clear();
        window.draw(circle);
        window.display();
    }
    
    
    return 0;
}