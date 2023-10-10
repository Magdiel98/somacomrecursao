#include "recursao.h"



int soma(int numero)
{
	if(numero == 1)
		return numero; 
	else
		return numero + soma(numero - 1); 

}



