#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
   float c, v;
   
   cin >> c;
   
   v = 14.6 * sqrt(c);
   cout << fixed << setprecision(3);
   cout << v;
}



