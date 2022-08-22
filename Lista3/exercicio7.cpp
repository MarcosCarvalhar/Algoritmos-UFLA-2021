#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	//vetor 1 - mulheres, 2 - homens, 0 - total
	
	int n, k;
	
	float altura, somaAltura[3], maiorAltura, menorAltura, mediaAltura;
	float nMulheres=0, mediaAlturaMulheres=0;
	float nHomens=0, mediaAlturaHomens=0;
	
	char genero;
	
	cin >> n;
	cin >> altura >> genero;
	
	if(genero == 'f'){
	/*  maiorAltura[1] = altura;
		menorAltura[1] = altura;
		somaAltura[0]  = altura;
		somaAltura[1]  = altura;  */
		k = 1;
		nMulheres++;
	}else{
		k = 2;
		nHomens++;
	}
	
		somaAltura[0]  = altura;
		somaAltura[k]  = altura; 
		maiorAltura    = altura;
		menorAltura    = altura;
		
	for(int i=1; i<n; i++){
		cin >> altura >> genero;
		
		if(genero == 'f'){
			k = 1;
			nMulheres++;
		}else{
			k = 2;
			nHomens++;
		}
		if(altura < menorAltura){
			menorAltura = altura;
		}else
		if(altura > maiorAltura){
			maiorAltura = altura;
			
		}
		somaAltura[0]  = somaAltura[0] + altura;
		somaAltura[k]  = somaAltura[k] + altura; 
	}
	mediaAltura			= somaAltura[0] / n;
	mediaAlturaHomens   = somaAltura[2] / nHomens;
	mediaAlturaMulheres = somaAltura[1] / nMulheres;
	
	//cout << fixed << setprecision(1);
	
	cout << maiorAltura << endl << menorAltura << endl;
	
	//cout << fixed << setprecision(3);
	
	if(nMulheres != 0){
		cout << mediaAlturaMulheres << endl;
	}else
		cout << "erro" << endl;
	if(nHomens != 0){
		cout << mediaAlturaHomens << endl;
	}else
		cout << "erro" << endl;
		
	cout << mediaAltura;  
}
