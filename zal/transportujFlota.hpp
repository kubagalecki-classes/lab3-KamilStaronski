#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia;
    int suma=0;
    int licznik=0;
    while(suma<towar){
        Statek* nowy_statek = stocznia();
        int wartosc = nowy_statek -> transportuj();
        suma += wartosc;
        Zaglowiec* rzutowany = dynamic_cast <Zaglowiec*> (nowy_statek);
        if(rzutowany!=0) 
        {
            licznik++;
        }
        std::cout<<rzutowany<<endl;
        delete nowy_statek;
    }
    std::cout<<std::endl<<"suma = "<<suma<<std::endl;
    //return suma;
    
    
    std::cout<<endl<<"zaglowce = "<<licznik<<endl;
    return licznik;
}

