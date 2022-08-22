#include <iostream>
#include <cmath>
using namespace std;

int main(){
	char numero[10];
	int primeiroDigito, j=0;
	//int n, divisor=100, result, i=2, primeiroDigito;
	for(int i=0; i<10; i++){
		cin >> numero[i];
		j++;
		if(numero[i] == endl){ i=10; }
	}
	/*while (result != 0){
		result = n / divisor;
		if(result != 0){ i++; }
		divisor = divisor*10;
	}*/
	
	
	//sprintf(numero, "%d", n);
	
	primeiroDigito = numero[0];
	numero[0] = numero[j-1];
	numero[j-1] = primeiroDigito;
	
	cout << numero;
}
