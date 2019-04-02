#include "Ifood.h"

Ifood::Ifood(char rest)
{
    setRest( rest );
}

Ifood::~Ifood()
{
}

void Ifood::setRest(char rest)
{
    int i=0;
    while( rest[i] != '\0' ){
        if( 'Z'<= rest[i] >= 'A' || 'z'<= rest[i] >= 'a' || '0'<= rest[i] >= '9'){
            restaurante = rest;
        }
        i++;
    }
    
}