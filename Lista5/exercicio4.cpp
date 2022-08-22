#include <iostream>
using namespace std;

int main(){
	int v[10] = {0};
	int k, n, p;
	
	cin >> k;
	
	for (int i=0; i<k; i++){
		cin >> v[i];
	}
	
	cin >> n >> p;
	
	if(k==10){
		v[9] = 0;
	}
	
	while(k>=p){
		v[k+1] = v[k];
		k--;
	}
	/*
	for (; k==p; k--){
		v[k+1] = v[k];
	}*/
	
	v[p] = n;
	
	for (int i=0; i<10; i++){
		cout << v[i] << " ";
	}
}
