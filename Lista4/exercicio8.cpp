#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float calc(float n){
	float i=1;
	float s=0;
	while (i<=n){
		s = s + (i*(i+1)/(i+3));
		i++;
	}
	return s;
}

int main()
{
	float n, s;
	cin >> n;
	s = calc(n);
	cout << s;
}
