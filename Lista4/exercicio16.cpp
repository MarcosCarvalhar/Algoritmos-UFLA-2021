#include <iostream>

using namespace std;

int tribonacci(int q){
	if(q == 1){
		return 1;
	}
	if(q == 0){
		return 0;
	}else{
		return (tribonacci(q-1) + tribonacci(q-2));
	}
}

int main()
{
	int q, i=0;
	cin >> q;
	while(i < q){
		cout << tribonacci(i) << " ";
		i++;
	}
}



