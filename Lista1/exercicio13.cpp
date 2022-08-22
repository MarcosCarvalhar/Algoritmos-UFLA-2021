#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int ms, tempo[2], i=0;
   float seg;
   
   cin >> ms;
   
   int divisores[2] = {3600000, 60000};
   
   while(i < 2){
	   tempo[i] = ms/divisores[i];
	   ms = ms % divisores[i];
	   
	   i++;
   }

   seg = float(ms)/1000;
   
   cout << fixed << setprecision(1);
   cout << tempo [0] << " : ";
   
   cout << tempo [1] << " : ";
   
   cout << seg;
}
