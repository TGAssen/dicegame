#ifndef GAME_H
#define GAME_H
#include "Playerlist.hpp"
class Game{
    public:
       

        Game(int aor, int aop){
            
        }
        
        void setAOR(int aor){
            amount_of_rounds= aor;
        }
        void setAOP(Playerlist pl){
            amount_of_participants= pl.getSize();
        }
        void startGame(Playerlist pl, int aor){
            setAOP(pl);
            setAOR(aor);

        }
        void endGame(){
            
        }
    private:
        int amount_of_rounds;
        int amount_of_participants;
        Playerlist p;
};
#endif