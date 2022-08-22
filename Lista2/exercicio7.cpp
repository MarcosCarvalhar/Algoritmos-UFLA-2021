#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float vInicial, vFinal;
   int tipo;
   
   cin >> tipo >> vInicial;
   
   if(tipo == 2){
	 vFinal = (vInicial * 0.03) + vInicial - 30;
   }else{
	 vFinal = (vInicial * 0.005) + vInicial;  
   }
   
   cout << fixed << setprecision(2);
   cout << vFinal;
}



