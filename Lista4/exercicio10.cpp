#include <iostream>
#include <string>
using namespace std;

void tribonacci(int q, int n1, int n2, int n3){
	int n4 = 0;
	n4 = n1 + n2 + n3;
	if(n4 == 0){
		n4 = 1;
	}
	if(q == 0){
		
	}else{
		cout << n4 << " ";
		tribonacci(q-1, n2, n3, n4);
	}
}

int main()
{
	int q, n1 =0, n2 = 0, n3 = 0;
	cin >> q;
	tribonacci(q, n1, n2, n3);
}



