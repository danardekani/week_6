#include <iostream>
using namespace std;

//Function decleration 
void printDivisors(int num);

int main() {
  int n;

  cout << "Enter a positive integer: ";
  cin >> n;
  printDivisors(n);

}

//Function definition
void printDivisors(int num) {
  for (int i = 1; i <= num; ++i)
  {
    if (num % i == 0)
      cout << i << endl;
  }
}