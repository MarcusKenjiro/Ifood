#ifndef IFOOD_H
#define IFOOD_H
#include <string>
using std::string;

#include <iostrem>
using std::cout;


class Ifood
{
public:

	Ifood( char );
	~Ifood();
    
	void setRest( char );
    
	char verRestaurante();

private:

	char restaurante;

};

#endif // IFOOD_H
