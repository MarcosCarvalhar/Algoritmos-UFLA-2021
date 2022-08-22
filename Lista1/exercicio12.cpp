#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int ms, resto, t, tempo[3], i=0;
   
   cin >> ms;
   
   int divisores[3] = {3600000, 60000, 1000};
   
   while(i < 3){
	   tempo[i] = ms/divisores[i];
	   resto = ms % divisores[i];
	   
	   i++;
   }
   
   cout << tempo[0] ":" << tempo [2] ":" << tempo [3];
}
