#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double phi=0, rFinal=2;
	int n, i=0;
	
	cin >> n;
	
	while(i < n){
		phi = sqrt((2) + phi);
		rFinal = rFinal * 2 / phi;
		
		i++;
	}
	
	cout << rFinal;
}
