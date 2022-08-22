#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float n, maiorValor1, maiorValor2, soma=0, media;
	
	cin >> n;
	soma = soma + n;
	maiorValor1 = n;
	
	
	cin >> n;
	soma = soma + n;
	if(n > maiorValor1){
		maiorValor2 = maiorValor1;
		
		maiorValor1 = n;
	}else {
		maiorValor2 = n;
	}
	
	for(int i=0; i<5; i++){
		cin >> n;
		soma = soma + n;
		if(n > maiorValor1){
			maiorValor2 = maiorValor1;
			maiorValor1 = n;
		}else {
			if(n > maiorValor2){
				maiorValor2 = n;
			}
		}
	}
	
	soma = soma - maiorValor1 - maiorValor2;
	media = soma / 5;
	
	cout << maiorValor1 << endl << maiorValor2 << endl << media;
}
