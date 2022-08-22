#include <iostream>

using namespace std;

int main()
{
	int n, soma=3, k=2;
	
	cin >> n;
	
	int numeros[n/2];
	numeros[0] = 1;
	numeros[1] = 2;
	
	if(n % 2 == 0){
		for (int i=3; i<=n/2; i++){
		//while(i <= n/2){	
			if(n % i == 0){
				numeros[k] = i;
				soma = soma + i;
				//cout << soma << endl;
				k++;
			}
		}
	}
	
	if(soma == n){
		for(int i=0; i<k; i++){
			cout << numeros[i] << " ";
		}
	}else { cout << -1; }
	
}
