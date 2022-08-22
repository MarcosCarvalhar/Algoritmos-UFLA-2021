#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int dividendo, divisor, resto, divisao;
	
	cin >> dividendo >> divisor;

	if(divisor == 0){
		cout << "erro";
	}else{
		resto   = dividendo % divisor;
		divisao = dividendo / divisor;
		
		cout << divisao << endl << resto;
	}
	return 0;
}

