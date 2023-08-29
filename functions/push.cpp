#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num = {1, 2, 3, 4, 5};

  cout << "Initial Vector: ";

  for (int i : num) {
    cout << i << "  ";
  }
  cout<<"\nSize #1: "<<num.size()<<endl;

  // add the integers 6 and 7 to the vector
  num.push_back(6);
  cout<<"Size #2: "<<num.size()<<endl;
  num.push_back(7);
  cout<<"Size #3: "<<num.size()<<endl;


  cout << "\nUpdated Vector: ";

  for (int i : num) {
    cout << i << "  ";
  }

  return 0;
}