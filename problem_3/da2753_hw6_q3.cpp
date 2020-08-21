#include <iostream>

using namespace std;

//Function declearation 
double eApprox(int n);

int main() { 
  cout.precision(30);

  for (int n = 1; n <= 15; n++) {
    cout << "n = " << n << '\t' << eApprox(n) << endl; 
  }
  return 0; 
}

double eApprox(int n) {
  double s = 1.00;
  double y = 1.00;
//decrementing from the starting point of 15 down to 0
  for (int i = n - 1; i > 0; i--)
    //e = 1 + 1/1, 1/2, 1/3..... 1/n
    s = 1 + y * s / i;
  return s;
}