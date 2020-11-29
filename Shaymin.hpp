#pragma once
#include "Pokemon.hpp"

class Shaymin : protected Pokemon {
    public:
    Shaymin(std::string l_name, int l_HP, int l_attack, int l_defense, int l_speed, int l_specialAttack, int l_specialDefense){
        name = l_name;
        HP = l_HP;
        attack = l_attack;
        defense = l_defense; 
        speed = l_speed;
        specialAttack = l_specialAttack;
        specialDefense = l_specialDefense;

    }
    int getspecialAttack ();
    void setspecialAttack (int l_specialAttack);

    int getspecialDefense ();
    void setspecialDefense (int l_specialDefense);

    void print();
    void print_to_xml();
    
private:
    int specialAttack;
    int specialDefense;
};
