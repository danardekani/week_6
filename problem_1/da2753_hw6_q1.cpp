#include <iostream>

using namespace std;

//Function decleration 
int fibonacci(int n);

int main() {

  int n, result;

  cout << "Please eneter a positive integer: ";
  cin >> n; 
  result = fibonacci(n);

  cout << result << endl;
  return 0;
}

//Function definition 
int fibonacci(int n) {
  if (n <= 1) {
    return n;
  } 
  else {
    //f = (f - 1) + (f - 2)
    return fibonacci(n - 1) + fibonacci(n -2 );
  }
}