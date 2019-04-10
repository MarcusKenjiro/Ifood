#include "Ifood.h"

Ifood::Ifood(int pedidos)
{
	setPedido( pedidos );
}

Ifood::Ifood(const string &rest)
{
	setPedido( rest );
}

Ifood::~Ifood()
{
}

void Ifood::setPedido( int pedidos )
{
    if( pedidos > 0 )
    {
        idPedido = pedidos;
        cout << "Id do pedido registrado com sucesso\n";
    }
    else{
        idPedido = 0;
		cout << "falha no Id do pedido";
	}
}

void Ifood::setPedido(const string &rest){
	if(rest != " "){
		nome = rest;
		idPedido = 1;
		cout << "restaurante selecionado com sucesso!\n\n";
	}else{
		cout << "Aguardando informar restaurante\n\n";
	}
}

void Ifood::pedir( string &prato )
{
	if(prato == "refrigerente" || prato == "bolo" || prato == "hamburger"){
		nomePedido = prato;
		conta = 5.50;
		cout << "O pedido efetuado\n\n";
	}else{
		cout << "O pedido não existe\n\n";
	}
}

void Ifood::verPedido( const int idPed )
{
	if(idPed == idPedido){
		cout << "pedido numero" << idPedido << " - " << nomePedido << " - R$ " << conta <<"\n\n";
	}
}

float Ifood::pagar( float valor )
{
	float r;
	if( valor >= 0 ){
		if( (conta - valor) <= 0 ){
			r = valor - conta;
		}else{
			r = 0;
			cout << "pagamento insuficiente\n";
		}
	}
	return r;
}
