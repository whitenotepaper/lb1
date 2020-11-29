#include "Pokemon.hpp"
#include <iostream>
#include <fstream>

Pokemon::Pokemon() {

}

Pokemon::Pokemon(std::string l_name) {
    name = l_name;
    
}

Pokemon::Pokemon(std::string l_name, int l_HP){
    name = l_name;
    HP = l_HP;
    
}

Pokemon::Pokemon(std::string l_name, int l_HP, int l_attack){
    name = l_name;
    HP = l_HP;
    attack = l_attack;
    
}  

Pokemon::Pokemon(std::string l_name, int l_HP, int l_attack, int l_defense) {
    name = l_name;
    HP = l_HP;
    attack = l_attack;
    defense = l_defense; 
   
}  

Pokemon::Pokemon(std::string l_name, int l_HP, int l_attack, int l_defense,  int l_speed) {
    name = l_name;
    HP = l_HP;
    attack = l_attack;
    defense = l_defense; 
    speed = l_speed;
}

Pokemon::~Pokemon() {

}

void Pokemon::SetPokemonName (std::string l_name) {
    name = l_name;
}

void Pokemon::SetPokemonHP (int l_HP) {
    HP = l_HP;
}

void Pokemon::SetPokemonAttack (int l_attack) {
    attack = l_attack;
}

void Pokemon::SetPokemonDefense (int l_defense) {
    defense = l_defense;
}

void Pokemon::SetPokemonSpeed (int l_speed) {
    speed = l_speed;
}

std::string Pokemon::GetPokemonName() {
    return name;
        }
    int Pokemon::GetPokemonHp() {
        return HP;
        }
    int Pokemon::GetPokemonAttack() {
        return attack;
        }
    int Pokemon::GetPokemonDefense() {
        return defense;
        }
    int Pokemon::GetPokemonSpeed() {
        return speed;
        }

void Pokemon::print () {
    std:: cout << "Name" << name << std::endl;
    std:: cout << "HP" << HP << std::endl;
    std:: cout << "Attack" << attack << std::endl;
    std:: cout << "Defence" << defense << std::endl;
    std:: cout << "Speed" << speed << std::endl;
}


