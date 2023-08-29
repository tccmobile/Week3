#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num = {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (int i : num) {
    cout << i << "  ";
  }

  // change elements at indexes 1 and 4
  num.at(1) = 9;
  num.at(4) = 7;
  //num.at(5) = 8;

  cout << "\nUpdated Vector: ";

  for (int i : num) {
    cout << i << "  ";
  }

  return 0;
}