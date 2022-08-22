#include <iostream>
#include <string>
using namespace std;

int main()
{
   char algar[6];
   string cor1, cor2;
   int n;
   
   cin >> cor1 >> cor2 >> n;
   
   sprintf(algar,"%d", n);
   
   if((algar[0] == algar[5]) && (algar[1] == algar[4])){
	   cout << cor1;
   }else{
	   cout << cor2;
   }
	   
}
