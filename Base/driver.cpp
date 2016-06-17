#include <iostream>
#include <fstream>
#include <string>
// #include "Datastruct"
using namespace std;

int main(){
  ifstream inFile;
  ofstream outFile;
  string inFileName;
  string outFileName;
  string outputLabel;
  string command;
  int numCommands;
  
  // Declare a variable of the type being tested
  
  cout << "Enter name of input file: ";
  cin >> inFileName;
  inFile.open(inFileName.c_str());
  
  cout << "Enter name of output file: ";
  cin >> outFileName;
  outFile.open(outFileName.c_str());
  
  cout << "Enter name of test run: ";
  cin >> outputLabel;
  outFile << outputLabel << endl;
  
  inFile >> command;
  numCommands = 0;
  
  while(command != "Quit")
  {
    /* Data structure functions */
    
    numCommands++;
    
    cout << "Command number " << numCommands << " completed." << endl;
    inFile >> command;
  }
  
  cout << "Testing completed." << endl;
  inFile.close();
  outFile.close();
  
  return 0;
}