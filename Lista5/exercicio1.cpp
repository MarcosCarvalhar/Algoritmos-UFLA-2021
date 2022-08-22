#include <iostream>
using namespace std;

void imprime(int vetor[], int n){
	for(int j=0; j<n; j++){
		cout << vetor[j];
		if(j < n-1){
			cout << ", ";
		}
	}
}

int main(){
	
	int n;
	cin >> n;
	int vetor[n];
	for(int i=0; i<n; i++){
		cin >> vetor[i];
	}

	cout << "[";

	imprime(vetor, n);

	cout << "]" << endl;
}
