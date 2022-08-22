#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void soma(int& n1, int& n2, int& r){
	r = n1 + n2;
}
int main()
{
   int n1, n2, r;
   
   cin >> n1 >> n2;
   
   soma(n1, n2, r);
   
   cout << r;
}



