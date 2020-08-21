#include <iostream>

using namespace std;

//======================================================Question 6========================================================//
//write a fucntion delclaration with three int arguments and returns the sum of the three arguments

//function declaration
// int sum(int first_par, int second_par, int third_par);

// int main() {
//   int one, two, three, result;

//   cout << "enter three positive ints: ";
//   cin >> one >> two >> three;

//   result = sum(one, two, three);

//   cout << "the sum is: " << result << endl;
//   return 0;
// }


// //function defintiion 
// int sum(int first_par, int second_par, int third_par) 
// {
//   return (first_par + second_par + third_par);
// }

//======================================================Question 7========================================================//
//Write a function that takes two arguments, one type int and one of type double. return average of the two as type double

//Function decleration
// double average(int first_par, double second_par);

// int main() {

//   int firstNum;
//   double secondNum, resultAve;

//   cout << "Please enter a positive number type integer: ";
//   cin >> firstNum;
//   cout << "Please enter a positive number type double: ";
//   cin >> secondNum;

//   resultAve = average(firstNum, secondNum);
  
//   cout << "the average is: " << resultAve << endl;

// return 0;

// //Function definition
// }

// double average(int first_par, double second_par) {
//   return ((first_par + second_par)/ 2.0);
// }

//======================================================Question 8========================================================//
char true_false(double num_par);

int main() {
  double num, result;

  cout << "please enter a number that is type double: ";
  cin >> num;

  result = true_false(num);

  cout << result << endl;
  return 0;
}

char true_false(double num_par) {
  if (num_par > 0)
    return 'P';
  else 
    return 'N';
}