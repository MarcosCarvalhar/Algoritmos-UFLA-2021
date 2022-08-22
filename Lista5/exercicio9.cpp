#include <iostream>

using namespace std;

int main()
{
	int v[20], par=0, impar=0;
	int pares[10], impares[10];
	
	for (int i=0; i<20; i++){
		cin >> v[i];
	}
	
	for (int i=0; i<20; i++){
		if(v[i] % 2 == 0){
			pares[par] = v[i];
			par++;
	}
	
	for (int i=0; i<20; i++){
		}if(v[i] % 2 != 0){
			impares[impar] = v[i];
			impar++;
		}
	}
	
	for (int i=0; i<par; i++){
		cout << pares[i] << " ";
	}
	
	cout << endl;
	
	for (int i=0; i<impar; i++){
		cout << impares[i] << " ";
	}
}


