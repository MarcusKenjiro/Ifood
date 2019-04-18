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

	Ifood(const string & );
    
    Ifood(const Ifood &);

	~Ifood();
    
    static float getVersion();
    
    void mostrarRestList();

	void setPedido(const int );

	void setPedido ( const string & );

    void pedir (string &);

	void verPedido(const int);

	float pagar( float );
    
private:
    const static int sizeRestList = 3;
    const static float version = 1.0;
    static string restList[sizeRestList];
    static int numClientes;
    int idPedido;
    string nome;
	string nomePedido;
	float conta;
	

};

#endif // IFOOD_H
