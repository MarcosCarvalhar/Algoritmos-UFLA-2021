#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int serie, caixa;
	cin >> serie;
	caixa = serie / 6;
	if (serie % 6 > 0){
		caixa ++;
	}
	cout << caixa;
}
