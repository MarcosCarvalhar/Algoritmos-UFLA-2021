#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int idade, meses, dias, semanas;
   cin >> idade;
   meses = idade * 12;
   semanas = idade * 52;
   dias = idade * 365;
   
   cout << "Essa pessoa tem" << (idade) << " anos de vida," << endl;
   cout << (meses) << " meses de vida," << endl;
   cout << (semanas) << " semanas de vida e" << endl;
   cout << (dias) << " dias de vida." << endl;
}
