#ifndef IFOOD_H
#define IFOOD_H

#include <string>
using std::string;

#include <iostream>
using std::cout;


class Ifood
{
public:

	Ifood( string &);
    Ifood();
	~Ifood();
    
	void setRest( string &);
    
    void setRest();
    
	string verRestaurante(const string &);
    
    string verRestaurante(const int );

private:

	string restaurante;
    string nome;
    int id;
    int nPedidos;

};

#endif // IFOOD_H
