#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int i=1;
   double raio, X, Y, angulo, qCadeiras, seno, cosseno, variavel;
   const double pi = 3.14159265358;
   cin >> raio >> qCadeiras;
   
   X = raio;
   Y = 0;
   angulo  = 360 / qCadeiras;
   
   cout << fixed << setprecision(2);
   cout << X << " " << Y << endl;
   
   
   while(i < qCadeiras){ 
	 variavel = pi * angulo * i / 180;
	 seno     = sin(variavel);	
	 cosseno  = cos(variavel);
	 X = raio * cosseno;
	 Y = raio * seno;
	 
	 cout << X << " " << Y << endl;
	 
	 i++;
   }
   
   return 0;     
}



