#ifndef FRACTION_H
#define FRACTION_H

class FractionType{
public:
  void Initialize(int numberator, int denominator);
  int GetNumerator();
  int GetDenominator();
  bool IsZero();
  bool IsNotProper();
  int ConvertToProper();
  
private:
  int num;
  int denom;
  
};

#endif