#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float valor_credito, saldo;
   
   cin >> saldo;
    
	 if (saldo == 0){
		valor_credito = 0;	
	 }else
		if (saldo < 200){
			valor_credito = saldo * 0.10;	
		}else
			if (saldo < 400){
				valor_credito = saldo * 0.15;	
			}else 
				if(saldo < 800){
					valor_credito = saldo * 0.20;
				}else
					if (saldo < 1600){
						valor_credito = saldo * 0.25;	
					}else
						if (saldo >= 1600){
							valor_credito = saldo * 0.30;	
						}
						
   cout << fixed << setprecision(2);
   cout << saldo << endl << valor_credito;
}



