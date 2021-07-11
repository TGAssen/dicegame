#ifndef PLAYERLIST_H
#define PLAYERLIST_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Player.hpp"
class Playerlist{
    public:
        Playerlist(){
        }

        void addPlayer(const Player& p){
            list.push_back(p);
        }
        void remPlayer(std::string pname){
            for(std::vector<Player>::iterator i = list.begin() ; i!=list.end(); i++ ){
                if(i->getName()==pname){
                    list.erase(i);
                }
            }
        }

        std::vector<Player> returnPlayerlist(){
            return list;
        }    
        void Reinit(int nsize){


        }
        int getSize(){
            return list.size();
        }
        void addScore(std::string pname, int score){
            for(std::vector<Player>::iterator i = list.begin() ; i!=list.end(); i++ ){
                if(i->getName()==pname){
                    i->addScore(score);
                }
            }            
        }
        Player& operator[](std::size_t idx){
            return list[idx];
        }
        ~Playerlist(){};


    protected:
        std::vector<Player> list;
    private:    
        
        int size;
};

template <typename T> 
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v){ 
    os << "["; 
    for (int i = 0; i < v.size(); ++i) { 
        os << v[i]; 
        if (i != v.size() - 1) 
            os << ", "; 
    } 
    os << "]\n"; 
    return os; 
} 
std::ostream& operator <<(std::ostream& os, Playerlist& pl){
    os<<pl.returnPlayerlist();
    return os;
}


#endif 
        