#include <iostream>
#include <string>
#include <limits>
using namespace std;


int main() {
  int choice = 0;
  string temp;
  
  cout << "Hello Vector World!\n";
  
  do {
    system("clear");
    cout << "\n\nWhich example program do wish to run?"<<endl;
    cout<<"\n1. Initialization of Vectors\n";
    cout<< "2. Accessing Elements\n";
    cout<<"3. Changing Elements\n";
    cout<<"4. Copying Vectors\n";
    cout<<"5. Iterators\n";
    cout<<"6. Iterators #2\n";
    cout<<"7. Pop\n";
    cout<<"8. Push\n";
    cout<<"9. Resize\n";
    cout<<"99. Quit\n\n";
    cout<<"Choice? ";
    getline(cin,temp);
    choice = stoi(temp);
    
    switch(choice){
      case(1):
        cout<<"\nInitialization\n\n";
        system("cd init && make -s init && ./init && rm init && cd ~");
        break;
      case(2):
        cout<<"\nElement Access\n\n";
        system("cd access && make -s access && ./access && rm access && cd ~");
        break;
      case(3):
        cout<<"\nChanging Elements\n\n";
        system("cd access && make -s change && ./change && rm change && cd ~");
        break;
      case(4):
        cout<<"\nCopying\n\n";
        system("cd functions && make -s copy && ./copy && rm copy && cd ~");
        break;
      case(5):
        cout<<"\nIterators 1\n\n";
        system("cd functions && make -s iter && ./iter && rm iter && cd ~");
        break;
      case(6):
        cout<<"\nIterators 2\n\n";
        system("cd functions && make -s iter2 && ./iter2 && rm iter2 && cd ~");
        break;
      case(7):
        cout<<"\nPop\n\n";
        system("cd functions && make -s pop && ./pop && rm pop && cd ~");
        break;
      case(8):
        cout<<"\nPush\n\n";
        system("cd functions && make -s push && ./push && rm push && cd ~");
        break;
      case(9):
        cout<<"\nResize\n\n";
        system("cd functions && make -s resize && ./resize && rm resize && cd ~");
        break;
      case(99):
        exit(0);
    }

      cout<<"\n\nHit enter to continue\n";
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
    
      
  } while (true);
  

  return 0;
}