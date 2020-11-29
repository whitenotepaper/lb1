#include <iostream>
#include <fstream>
#include "Pokemon.hpp"
#include "charmander.hpp"
#include "Shaymin.hpp"
#include "vulpix.hpp"

int main(){
    charmander charmander("charmander", 39, 52, 43, 65, 60, 50);
    Shaymin Shaymin("Shaymin", 100, 100, 100, 100, 100, 100);
    vulpix vulpix("vulpix", 38, 41, 40, 65, 50, 65);
    charmander.print();
    Shaymin.print();
    vulpix.print();

    
    vulpix.print_to_xml();
    Shaymin.print_to_xml();
    charmander.print_to_xml();



    return 0;
}
