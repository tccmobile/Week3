
#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> userVals; // No elements yet
   int numVals;
   unsigned int i;
   
   cout<< " userVals size: "<<userVals.size()<<endl;
   cout << "Enter number of integer values: ";
   cin >> numVals;
   
   userVals.resize(numVals); // Allocate elements
   cout<< " userVals size: "<<userVals.size()<<endl;
   cout << "Enter " << numVals << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }

   cout << "You entered: ";
   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << " ";
   }
   cout << endl;
   cout<<"Enter a new size: ";
   cin>>numVals;
   userVals.resize(numVals);
   cout<<endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << " ";
   }
   cout<<"Enter a new size: ";
   cin>>numVals;
   userVals.resize(numVals);
   cout<<endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << " ";
   }
   return 0;
  }