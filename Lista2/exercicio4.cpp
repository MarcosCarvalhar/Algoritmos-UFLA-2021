#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float math, ciencNat, ling, red, ciencHum, soma, media;
   
   cin >> math >> ciencNat >> ling >> red >> ciencHum; 
   
   if (red >= 200){
	 soma  = (math * 3) + (ciencNat * 2) + (ling * 2) + (red * 2) + ciencHum;
	 media = soma / 10;
	 cout << media;
   }else{
	 media = -1;
	 cout << media;
   }
}


