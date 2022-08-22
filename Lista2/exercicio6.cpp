#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   char letra, info = 0;
   
   cin >> letra;
   
   char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'} ;
   
   for(int i=0; i<26; i++){
	 
	 if(letra == alfabeto[i]){
		info = 1;
		i = 26;
	 }
   }
   
   if(info == 0){
	 cout << "MAIUSCULA";
   }else{
	 cout << "MINUSCULA";
   }
}



