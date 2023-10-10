#include <iostream>
#include "recursao.h"

using namespace std; 


int main(int argc, char* argv[])
{
	int valor; 	
	
	cout << "Digite um numero: "; 
	cin >> valor; 
	
	cout << "A soma de 1 ate " << valor << " e : "<< soma(valor) <<endl; 

	return 0; 
}
