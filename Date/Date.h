#ifndef MYDATE_H
#define MYDATE_H

#include <string>
#include <fstream>
using namespace std;

enum RelationType {LESS, EQUAL, GREATER};

namespace MyDate {

class Date{
public:
  void Initialize(int mVal, int dVal, int yVal);
  

private:
  int month;
  int day;
  int year;
};

}

#endif