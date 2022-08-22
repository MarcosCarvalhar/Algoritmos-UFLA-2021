#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   char l;
   int a=0, b=0;
   
   for(int i=1; i<10; i++){
		cin >> l;
		
		if(l == 'a'){
			a++;
		}else
			b++;
		
   }
   
   if(a<b){
		cout << '1';
	}else
		cout << '0';
}
