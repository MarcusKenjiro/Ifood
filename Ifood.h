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
	Ifood(const int );

	Ifood( string & );
    
    Ifood(const Ifood &);

	~Ifood();

	void setPedido(const int );

	void setPedido ( const string & );

    void pedir (string &);

	void verPedido(const int);

	float pagar( float );
    
private:
    const static string desenvolvedor = "Marcus Kenjiro";
    static numClientes;
    int idPedido;
    string nome;
	string nomePedido;
	float conta;
	

};

#endif // IFOOD_H
