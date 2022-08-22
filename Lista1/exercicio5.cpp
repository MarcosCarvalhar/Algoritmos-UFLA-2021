#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float h_Degraus, h_A_Subir, n_Degraus;
   
   cin >> h_Degraus >> h_A_Subir;
   
   h_A_Subir = h_A_Subir*100;
   
   n_Degraus = h_A_Subir / h_Degraus;
	
   cout << ceil(n_Degraus);
}



