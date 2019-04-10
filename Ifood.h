#ifndef IFOOD_H
#define IFOOD_H
#include <string>
using std::string;
#include<iostream>
using std::cin;
using std::cout;


class Ifood
{
public:
	Ifood( int );

	Ifood( const string & );

	~Ifood();

	void setPedido( int );

	void setPedido ( const string & );

    void pedir (string &);

	void verPedido(const int);

	float pagar( float );
    
private:
    int idPedido;
    string nome;
	string nomePedido;
	float conta;
	

};

#endif // IFOOD_H
