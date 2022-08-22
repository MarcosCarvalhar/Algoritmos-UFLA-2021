#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   int n, linhas = 0, colunas = 0;
   
   cin >> n;
   while (colunas < n){
	 linhas = 1;
	 while (linhas <= n){
		if(colunas % 2 != 0){
			if(linhas % 2 != 0){
				cout << '#';
			}else
			if(linhas % 2 == 0){
				cout << '.';
			}
		}else 
		if(colunas % 2 == 0){
			if(linhas % 2 == 0){
				cout << '#';
			}else
			if(linhas % 2 != 0){
				cout << '.';
			}
		}
		
		linhas++;
	 }
	 cout << endl;
	 colunas++;
   }
}




