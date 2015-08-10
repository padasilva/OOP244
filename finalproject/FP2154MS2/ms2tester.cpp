#include <iostream>
#include "MyFile.h"
using namespace std;
using namespace oop244;
int main(){
  fstream file("ms2.txt", ios::out);
  file << "one" << endl << "two" << endl;
  file.close();
  MyFile F("ms2.txt");
  F.load(file);
  cout << "Linear: " << F << endl;
  cout << "As is: " << endl;
  F.print();
  cout << "Enter the folowing: " << endl << "three<ENTER>" << endl << "four<ENTER>" << endl << "<Ctrl-Z><ENTER>" << endl << endl;
  cin >> F;
  F.store(file);
  F.load(file);
  cout << F << endl;
  F.print();
  return 0;
}