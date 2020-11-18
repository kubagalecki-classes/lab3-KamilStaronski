#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia;
    int suma=0;
    while(suma<towar){
        Statek* nowy_statek=stocznia();
        int wartosc = nowy_statek->transportuj();
        suma+=wartosc;
        //rzutowanie jeśli rózne od 0
        
        delete nowy_statek;
    }
    std::cout<<endl<<"suma = "<<suma<<endl;
    return suma;
}
