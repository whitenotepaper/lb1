#include "Shaymin.hpp"
#include <iostream>
#include <fstream>
void Shaymin::print()
{
    Pokemon::print();
    std:: cout << "Special attack" << specialAttack << std::endl;
    std:: cout << "Special defense" << specialDefense << std::endl;
}


void Shaymin :: print_to_xml() 
{
std::ofstream pokemon1;
    pokemon1.open("pokemon1.xml",std::ios::app);
if(!pokemon1.is_open()){
        std:: cout << "Error open file" << std::endl;
    }
    else{
pokemon1 << " </pokemon>\n";
pokemon1 << "<pokemon name="<<GetPokemonName()<<">\n"; 
pokemon1 << "<hp>" << GetPokemonHp() << "</hp>\n"; 
pokemon1 << " <attack>"<< GetPokemonAttack()<<"</attack>\n"; 
pokemon1 << "<defense>"<<GetPokemonDefense()<<"</defense>\n"; 
pokemon1 << "<speed>"<<GetPokemonSpeed()<<"</speed>\n"; 
pokemon1 << " <specealAttack>" << getspecialAttack ()<<"</specealAttack>\n";
pokemon1 << "<specealDefence>" << getspecialDefense ()<<"</specealDefence>\n";
pokemon1 << " </pokemon>\n";
}
pokemon1.close();
}

int Shaymin::getspecialAttack ()
{
    return specialAttack;
}
void Shaymin::setspecialAttack (int l_specialAttack)
{
    Shaymin::specialAttack = l_specialAttack;
}

int Shaymin::getspecialDefense ()
{
    return specialDefense;
}
void Shaymin::setspecialDefense (int l_specialDefense)
{
    Shaymin::specialDefense = l_specialDefense;
}