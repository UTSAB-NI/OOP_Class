#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

template <typename T>
void printTable(int *arr, T res[], int rowSize, int colSize, string type) {
  string stars = "********************";
  cout << stars << endl;
  cout << "     " << type << endl;
  for (int i = 0; i < rowSize; i++) {
    for (int j = i * colSize ; j < i * colSize + colSize; j++) {
      cout << arr[j] << " ";
    }
    cout << res[i] << endl;
  }
  cout << stars << endl;
}


int validInput() {
  int input;
  bool isNotValid;
  do {
    if ( isNotValid ) cout << "Try Again with 0 or 1 : ";
    cin >> input;
    isNotValid = input != 0 && input != 1;
  } while ( isNotValid );
  return input;
}

// NOT
void _negation( int *arr, int rowSize, int colSize ) {
  string res[rowSize];
  for (int i = 0; i < rowSize; i++) {
    int j = i * colSize;
    res[i] = "";
    while ( j < i * colSize + colSize ) {
      // Inverting the bits and adding to a string
      int negation = arr[j] == 0 ? 1 : 0;
      // res[i] = res[i] * 10 + negation;
      res[i] += to_string(negation);
      j++;
    }
  }
  printTable(arr, res, rowSize, colSize, "Negation");
}

// AND
void _conjunction( int *arr, int rowSize, int colSize ) {
  int res[rowSize];
  for (int i = 0; i < rowSize; i++) {
    int j = i * colSize;
    bool isZero = false;
    while ( j < i * colSize + colSize ) {
      // Any of the bits are zero then conjunction is zero
      if ( arr[j] == 0 ) {
        isZero = true;
        break;
      }
      j++;
    }
    res[i] = isZero ? 0 : 1;
  }
  printTable(arr, res, rowSize, colSize, "Conjunction");
}

// OR
void _disjunction( int *arr, int rowSize, int colSize ) {
  int res[rowSize];
  for (int i = 0; i < rowSize; i++) {
    int j = i * colSize;
    bool isOne = false;
    while ( j < i * colSize + colSize ) {
      // Any of the bits are zero then disjunction is one
      if ( arr[j] == 1 ) {
        isOne = true;
        break;
      }
      j++;
    }
    res[i] = isOne ? 1 : 0;
  }
  printTable(arr, res, rowSize, colSize, "Disjunction");
}

int main() {
  int rowSize, bitSize;
  cout << "Enter the bit size : ";
  cin >> bitSize;
  rowSize = (int) pow(2, bitSize);
  int matrix[rowSize][bitSize];

  for (int i = 0; i < rowSize; i++) {
    for (int j = 0; j < bitSize; j++) {
      cout << "Enter bit for ( " << i + 1 << " " << j + 1 << " ) : ";
      // { validInput } - a function to get only 0 or 1 as input
      matrix[i][j] = validInput();
    }
  }

  bool isRunning = true;
  while ( isRunning ) {
    int choice;
    cout << "0. exit" << endl;
    cout << "1. conjunction || and" << endl;
    cout << "2. disjunction || or" << endl;
    cout << "3. negation || not" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    switch ( choice ) {
      case 1:
        _conjunction(*matrix, rowSize, bitSize);
        break;
      case 2:
        _disjunction(*matrix, rowSize, bitSize);
        break;
      case 3:
        _negation(*matrix, rowSize, bitSize);
        break;
      case 0:
        isRunning = false;
        break;
    }
  }
  return 0;
}
