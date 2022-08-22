#include <iostream>
#include <string>
using namespace std;

int fatoracao(int n1, int n2){
	if(n2 == 1){
		return n1;
	}else 
	if((n1 == 0) or (n2 == 0)){
		return 0;
	}else
	return n1 + fatoracao(n1, (n2-1));
}

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	
	cout << fatoracao(n1, n2);
}
