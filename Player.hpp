#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream> 


class Player {
    public:
        Player (std::string n= "undefined", int s=0){
            name=n;
            score=s;


        }
        void addScore(int inc_score){
            if (inc_score == 0){
                score= 0;
            }
            else{
                score = score +inc_score;
            }
            
        }
        int getScore() const {
            return score;
        }
        std::string getName() const {
            return name;
        }

    private:
        std::string name;
        int score;

};

/*std::ostream& operator << (std::ostream& os, Player& p){
    os<< p.getName()<<" heeft een score van: "<<p.getScore()<<"!";
    return os;
}*/
std::ostream& operator << (std::ostream& os,  const Player& p){
    os<< p.getName()<<" heeft een score van: "<<p.getScore()<<"!";
    return os;
}

#endif 