#ifndef IFOOD_H
#define IFOOD_H
#include <string>
using std::string;

#include <iostream>
using std::cout;


class Ifood
{
public:

	Ifood( string );
    Ifood();
	~Ifood();
    
	void setRest( string );
    
    void setRest();
    
	string verRestaurante( string );
    
    string verRestaurante( int );

private:

	string restaurante;
    string nome;
    int id;

};

#endif // IFOOD_H
