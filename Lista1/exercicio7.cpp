#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int v_entregue, v_total, troco, i=0, valor;
   
   //cedula20=0, cedula10=0, cedula5=0, cedula2=0, cedula1=0;
   
   cin >> v_entregue >> v_total;
   
   troco = v_entregue - v_total;
   
   int cedula[5] = {20, 10, 5, 2, 1} ;
   
   while(i < 5){
	   valor = troco/cedula[i];
	   cout << valor << endl;
	   troco = troco % cedula[i];
	   
	   i++;
   }
}



