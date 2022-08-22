#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int n, pares=0, impares=0;
   cin >> n;
   
   char numero[5];
   sprintf(numero,"%d", n);
   
   for(int i=0; i<5; i++){
	 
	 if((numero[i] % 2)==0){
		pares++;
	 }else{
		impares++;
 	 }
   }
   
   cout << pares << endl << impares;
}


