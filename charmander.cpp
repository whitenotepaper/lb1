#include "charmander.hpp"
#include <iostream>
#include <fstream>
void charmander::print()
{
    Pokemon::print();
    std:: cout << "Special attack" << specialAttack << std::endl;
    std:: cout << "Special defense" << specialDefense << std::endl;
}


void charmander :: print_to_xml() 
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

int charmander::getspecialAttack ()
{
    return specialAttack;
}
void charmander::setspecialAttack (int l_specialAttack)
{
    charmander::specialAttack = l_specialAttack;
}

int charmander::getspecialDefense ()
{
    return specialDefense;
}
void charmander::setspecialDefense (int l_specialDefense)
{
    charmander::specialDefense = l_specialDefense;
}