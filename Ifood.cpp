#include "Ifood.h"
#include <iostream>
using std::cout;
using std::cout;

#include <string>
using std::string;




Ifood::Ifood(string &rest)
{
    setRest( rest );
}

Ifood::Ifood()
{
    setRest();
}

Ifood::~Ifood()
{
}
 
void Ifood::setRest( string &rest )
{
    int len=0, cont=0, verif = 0;
    while( rest[cont] != '\0' ){
        if( 'Z'<= rest[cont] >= 'A' || 'z'<= rest[cont] >= 'a' || '0'<= rest[cont] >= '9'){
        
        }else{
            verif = 1;
        }
        len++;
    }
    if(verif == 0){
        restaurante = rest;
    }
}

void Ifood::setRest()
{
    restaurante = "Restaurante 01"
}

string Ifood::verRestaurante(const string &nome) const
{
    cout << rest;
}

string Ifood::verRestaurante(const int id) const
{
    cout << id + rest;
}