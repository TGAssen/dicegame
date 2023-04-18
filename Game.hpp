#ifndef GAME_H
#define GAME_H
#include "Playerlist.hpp"
class Game{
    public:
       

        Game(int _aor, int _aop):amount_of_rounds(_aor), amount_of_participants(_aop){
            
        }
        
        void setAOR(int _aor){
            amount_of_rounds= _aor;
        }
        void setAOP(Playerlist _pl){
            amount_of_participants= _pl.getSize();
        }
        void startGame(Playerlist _pl, int _aor){
            setAOP(_pl);
            setAOR(_aor);

        }
        void endGame(){
            
        }
    private:
        int amount_of_rounds;
        int amount_of_participants;
        Playerlist p;
};
#endif