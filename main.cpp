#include "Playerlist.hpp"
#include "Player.hpp"
#include <imgui>

int gameLoop(){
    Playerlist pl= Playerlist();

    pl.addPlayer(Player("Timo"));
    pl.addScore("Timo",5);
    std::cout<< pl;

    pl.addScore("Timo",10);
    
    std::cout<< pl ;
    pl.addPlayer(Player("Nadine"));
    pl.addScore("Nadine",20);
    pl.remPlayer("Timo");
    std::cout<<pl;

    while(std::cin.get() != '\n'){
        std::cin.ignore();
    }


}
int main(int, char**) {
    ImGui::ShowDemoWindow()
    gameLoop();
}
