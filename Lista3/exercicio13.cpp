#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
	string gabarito;
	char questao;
	int n, j, k, cor, quantidade=0;
	
	cin >> n;
	while(n != 0){
		j=0;
		while(j < n){
			quantidade = 0;
			k = 65;
			j++;
			while(k < 70){
				cin >> cor;
				if(cor <= 127){
					quantidade++;
					if(quantidade < 2){
						questao = k;
					}else {questao = 42;}
				}
				
				k++;
			}
			gabarito = gabarito + "\n" + questao;
		}
		cin >> n;
	}
	cout << endl << gabarito;
}
