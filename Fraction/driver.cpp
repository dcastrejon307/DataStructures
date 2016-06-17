#include <iostream>
#include <fstream>
#include <string>
// #include "Datastruct"
#include "Fraction.h"
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
  FractionType fraction;
  
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
    if(command == "Initialize"){
      int num, dem;
      
      inFile >> num;
      inFile >> dem;
      
      fraction.Initialize(num, dem);
      
      outFile << "Numerator: " << fraction.GetNumerator();
      outFile << " Denominator: " << fraction.GetDenominator() << endl;
    }
    else if(command == "GetNumerator"){
      outFile << "Numerator: " << fraction.GetNumerator() << endl;
    }
    else if(command == "GetDenominator"){
      outFile << "Denominator: " << fraction.GetDenominator() << endl;
    }
    else if(command == "IsZero"){
      if (fraction.IsZero()) {
        outFile << "Fraction is zero!" << endl;
      }
      else {
        outFile << "Fraction is not zero!" << endl;
      }
    }
    else if(command == "IsNotProper"){
      if(fraction.IsNotProper())
      {
        outFile << "Fraction is improper " << endl;
      }
      else{
        outFile << "Fraction is proper " << endl;
      }
    }
    else{
      outFile << "Whole number is " << fraction.ConvertToProper() << endl;
      outFile << "Numerator: " << fraction.GetNumerator();
      outFile << " Denominator: " << fraction.GetDenominator() << endl;
    }
    
    numCommands++;
    
    cout << "Command number " << numCommands << " completed." << endl;
    inFile >> command;
  }
  
  cout << "Testing completed." << endl;
  inFile.close();
  outFile.close();
  
  return 0;
}