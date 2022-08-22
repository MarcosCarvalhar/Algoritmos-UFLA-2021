#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   char genero;
   
   cin >> genero;
   
   float h, pesoIdealFem, pesoIdealMasc;
   
   cin >> h;
   
   pesoIdealMasc = (72.7 * h) - 58.0;
   pesoIdealFem  = (62.1 * h) - 44.7;
   
   if(genero == 'M'){
	  cout << pesoIdealMasc;
   }else{
	  cout << pesoIdealFem;
   }
}
