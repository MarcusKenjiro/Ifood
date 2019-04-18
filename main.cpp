#include <stdio.h>
#include "Ifood.h"
#include <iostream>
using std::cout;
using std::cin;
#include <string.h>
using std::string;


int main(int argc, char **argv)
{
    cout<< "versao " << Ifood::getVersion() <<"\n\n";
    Ifood ped1( 1 ); 
    Ifood ped2(" ");
    
    ped2.mostrarRestList();

    string rest, prato;
	int idPed;
	float troco,valor;
    
    cout << "Insira seu nome de Restaurante:";
    cin >> rest;
    ped2.setPedido( rest );
	
	cout << "Fazer o pedido:";
	cin >> prato;
	ped2.pedir(prato);
	
	cout << "Insira Id do pedido:";
    cin >> idPed;
    ped2.verPedido( idPed );
	
	cout << "Insira o valor de pagamento: ";
    cin >> valor;
    troco = ped2.pagar( valor );
	cout << "Troco = R$" << troco << "\n";
    
    Ifood ped3(ped2);
	return 0;
}
