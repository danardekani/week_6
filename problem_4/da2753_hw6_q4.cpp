#include <iostream>
#include <cmath>
using namespace std;

//======================================= Section A =========================================//

//Function decleration 
void printDivisors(int num);

int main() {
  cout << " |===== Section A =====|" << endl;

  int n;
  printDivisors(100);

//======================================= Section B =========================================//

  cout << " |===== Section B =====|" << endl;
  cout << "Please enter a positive integer >=2: ";
  cin >> n ;
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