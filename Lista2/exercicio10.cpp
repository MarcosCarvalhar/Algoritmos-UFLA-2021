#include <iostream>
#include <string>
using namespace std;

int main()
{
   string cor1, cor2;
   
   cin >> cor1 >> cor2;
   
   if(cor1 =="azul"){
	    if (cor2 =="azul"){
			cout << "azul";
		}else 
		if (cor2 =="amarelo"){
			cout << "verde";
		}else 
		if (cor2 =="vermelho"){
			cout << "violeta";
		}
   }else 
   if(cor1 =="amarelo"){
	    if (cor2 =="amarelo"){
			cout << "amarelo";
		}else 
		if (cor2 =="azul"){
			cout << "verde";
		}else 
		if (cor2 =="vermelho"){
			cout << "laranja";
		}
   }else
   if(cor1 =="vermelho"){
	    if (cor2 =="vermelho"){
			cout << "vermelho";
		}else 
		if (cor2 =="azul"){
			cout << "violeta";
		}else 
		if (cor2 =="amarelo"){
			cout << "laranja";
		}
   }
   
}



