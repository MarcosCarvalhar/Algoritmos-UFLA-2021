#include <iostream>
#include <string>
using namespace std;

string corrige(string nomes[], int& n){
	int k=0;
	
	for(int i=0; i<n; i++){
		if(nomes[i] != nomes[i+1]){
			nomes[k] = nomes[i];
			k++;
		}
	}
	n = k;
	
	return nomes[n];
}

int main()
{
	int n;
	
	cin >> n;
	
	string nomes[n+1];
	
	for(int i=0; i<n; i++){
		cin >> nomes[i];
	}

	corrige(nomes, n);
	
	cout << n << endl;
	
	for(int i=0; i<n; i++){
		cout << nomes[i] << endl;
	}
}



