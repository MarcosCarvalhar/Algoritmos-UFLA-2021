#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int horas;
   float minimo, bruto, liquido, imposto;
   
   cin >> minimo >> horas;
   
   bruto = (float)horas * minimo * 0.05;
   imposto = bruto * 0.23;
   liquido = bruto - imposto;
   
   cout << liquido << endl;
}
