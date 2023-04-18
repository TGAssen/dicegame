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
        void remPlayer(std::string& pname){
            bool remove_succes = false;
            int size = list.size();
            for(std::vector<Player>::iterator i = list.begin() ; i!=list.end(); i++ ){

                if(i->getName()==pname){
                    std::cout << *i;
                    list.erase(i);
                    remove_succes=true;
                }
            }
            if (size==1 && remove_succes){
               
            }
        }

        std::vector<Player> returnPlayerlist(){
            return list;
        }    
        void Reinit(int nsize){


        }
        bool isEmpty(){
            return list.empty();
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
            return list.at(idx);
        }
        ~Playerlist(){};


    protected:
        
    private:    
        std::vector<Player> list;
        int size;
};

template <typename T> 
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v){
    os << "["; 
    for (int i = 0; i < v.size(); ++i) { 
        if (i > 0){
            os<<"\n";
        }
        os << v.at(i);
         
    } 
    os << "]\n"; 
    return os; 
} 
std::ostream& operator <<(std::ostream& os, Playerlist& pl){
    if(pl.isEmpty()){
        os<< "list is empty";
    }
    else{
        os<<pl.returnPlayerlist();
    }
    
    return os;
}


#endif 
        