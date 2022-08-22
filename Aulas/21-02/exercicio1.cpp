#include <iostream>
#include <string>
using namespace std;

int VerificaMaior(int maior, int valor){
	if(valor > maior){
		maior = valor;
	}
	
	return maior;	
}

int VerificaMenor(int menor, int valor){
	if(valor < menor){
		menor = valor;
	}
	
	return menor;
}
float funcao(float soma){
	float media;
	media = soma/10;
	
	return media;
}

int main()
{
	int v, maior, menor, i=1;
	float media, soma;
	
    cin >> v;
    
    maior = v;
    menor = v;
    soma  = v;
    
    while(i < 10){
		cin >> v;
		
		maior = VerificaMaior(maior, v);
		menor = VerificaMenor(menor, v);
		
		soma += v;
		i++;
	}
	
	media = funcao(soma);
	
	cout << maior << endl << menor << endl << media;
}



