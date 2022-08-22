#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float peso_Produto, preco_Bruto, preco_Imposto, preco_Liquido;
   int cod_Produto, cod_Pais_Produto;
   
   cin >> cod_Produto >> peso_Produto >> cod_Pais_Produto;
   
   peso_Produto = peso_Produto * 1000;
   
   switch (cod_Produto){
   
   case 1 ... 4:
		preco_Bruto = 10 * peso_Produto;
		break;
		
   case 5 ... 7:
		preco_Bruto = 25 * peso_Produto;
		break;
	
   case 8 ... 10:
		preco_Bruto = 35 * peso_Produto;
		break;
   }
   
   switch (cod_Pais_Produto){
   
   case 1:
		preco_Imposto = 0;
		break;
		
   case 2:
		preco_Imposto = preco_Bruto * 0.15;
		break;
	
   case 3:
		preco_Imposto = preco_Bruto * 0.25;
		break;
   }
   
   preco_Liquido = preco_Bruto + preco_Imposto;
   
   cout << fixed << setprecision(1);
   
   cout << peso_Produto << endl << preco_Bruto << endl << preco_Imposto << endl << preco_Liquido;
}



