#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float salario, dolar, euro, libras;
   
   cin >> salario;
   
   dolar  = salario / 2.13;
   euro   = salario / 2.84;
   libras = salario / 3.34;
   
   cout << fixed << setprecision(2);
    
   cout << dolar << endl << euro << endl << libras << endl;
}

