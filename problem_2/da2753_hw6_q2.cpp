#include <iostream>
using namespace std;

//Function decleration
void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol); 

int main() {
  cout << " |===== Section A =====|" << endl;
  printShiftedTriangle(3, 4, '+');

  cout << " |===== Section B =====|" << endl;
  printPineTree(3, '#');
}

//Function definition for question 2a
void printShiftedTriangle(int n, int m, char symbol) {

  //Loop will iterate after every nested loop as run
  for(int i = 1; i <= n; i++) {

    //This loop maintains the margin
    for(int j = 1; j <= m; j++) {
      cout << " ";
    }

    //Loop will maintain spacing relative to the number
    //of symbols in each row 
    for(int s = 1; s <= n - i; s++) {
      cout << " ";
    }

    //While loop will print out symbols 
    int k = 0;
    while(k != 2 * i - 1) {
      cout << symbol;
      k++;
    }
    //Make sure to reset k to zero after each completion of 
    //the while loop
    k = 0;
    cout << endl;
  }
}

//Function Definition
//first parameter manipulates the number of rows
//second parameter manipulates the margin for each tree
//third parameter is the symbol
void printPineTree(int n, char symbol) {
  printShiftedTriangle(n - 1, n - 1, symbol);
  printShiftedTriangle(n, n - 2, symbol);
  printShiftedTriangle(n + 1, 0, symbol);
}
