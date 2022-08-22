#include <iostream>
#include <string>

using namespace std;

int fatorial(int n){
	if(n == 1)
	return 1;
	else 
	return n* fatorial(n-1);
}


int main(){
	
	string palavra;
	cin >> palavra;

	int tamanho = palavra.size();

	char *vetor = new char[tamanho];

	for(int i=0; i < tamanho; i++)
	{
		vetor[i] = palavra[i];
	}

	int contador = 1;
	int anagramas = fatorial(tamanho);

	for(int i=0; i < tamanho; i++)
	{
		contador = 1;

		for(int j = i + 1; j < tamanho; j++)
		{
			if(vetor[i] != '*'){
				if(vetor[i] == palavra[j]){
					contador++;
					vetor[i] = '*';
				}
			}
		}
		
		anagramas = anagramas / fatorial(contador);
	}

	cout << anagramas;

}
