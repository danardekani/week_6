#include <iostream>
#include <cmath>

using namespace std;

//Question 4- Convert the following mathematical expressions to a C++ arithmetic expressison

//A. √x+y
sqrt(x + y);

//B. x^y + 7 
pow(x, y + 7);

//C. √area + fudge
sqrt(area + fudge);


//Question 3
//Write a program that finds the square root of PI
const double PI = 3.14159;

int main() {
  cout << "Find the square root of PI is " << sqrt(PI) << endl;
  return 0;
}
