#include <iostream>
using namespace std;
int main() {

  int length, breadth;
  cout << "Enter length and breadth" << endl;
  cin >> length >> breadth;
  for (int i = 1; i <= length; i++) {
    for (int i = 1; i <= breadth; i++) {
      cout << "*";
    }
    cout << endl;  
  }
}
