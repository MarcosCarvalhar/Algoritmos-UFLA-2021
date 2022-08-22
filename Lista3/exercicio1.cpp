#include <iostream>

using namespace std;

int main(){
	int quociente, divisor, resultado = 0;
	cin >> quociente >> divisor;
	
	while (quociente >= divisor){
		quociente = quociente - divisor;
		resultado++;
	}
	
	cout << resultado;
}

