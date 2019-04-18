#include "Ifood.h"

int Ifood::numClientes = 0;

string Ifood::restList[sizeRestList]={"Subway","Bobs","McDonalds"};

Ifood::Ifood(const int pedidos)
{
	setPedido( pedidos );
    numClientes++;
}

Ifood::Ifood(const string &rest )
{
	setPedido( rest );
    numClientes++;
}

Ifood::Ifood(const Ifood &ped)
{
	idPedido = ped.idPedido;
    nome = ped.nome;
	nomePedido = ped.nomePedido;
	conta = ped.conta;
    
    numClientes++;
}

Ifood::~Ifood()
{
}

void Ifood::mostrarRestList()
{
    for(int i=0; i<sizeRestList; i++){
        cout << restList[i] << "\n";
    }
}

void Ifood::setPedido(const int pedidos )
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

float Ifood::getVersion()
{
    return version;
}