#include "Fraction.h"

// ==== Initialize =============================================================
// Description: This function initializes our fraction class with its numerator
//              and denominator.
// =============================================================================
void FractionType::Initialize(int numberator, int denominator){
  num = numberator;
  denom = denominator;
} // end of Initialize



// ==== GetNumerator ===========================================================
// Description: This function returns the numerator for a fraction object.
// =============================================================================
int FractionType::GetNumerator(){
  return num;
} // end of GetNumerator



// ==== GetDenominator =========================================================
// Description: This function returns the denominator for our fraction object.
// =============================================================================
int FractionType::GetDenominator(){
  return denom;
} // end of GetDenominator



// ==== IsZero =================================================================
// Description: This function checks to see if our fraction is zero.
// =============================================================================
bool FractionType::IsZero(){
  return (num == 0);
} // end of IsZero



// ==== IsNotProper ============================================================
// Description: This function checks to see if the fraction is proper.
// =============================================================================
bool FractionType::IsNotProper(){
  return (num >= denom);
} // end of IsNotProper



// ==== ConvertToProper ========================================================
// Description: This functions retuns a proper fraction and is in reduced form.
// =============================================================================
int FractionType::ConvertToProper(){
  int whole;
  
  whole = num / denom;
  
  num = num % denom;
  
  if(num == 0){
    denom = 1;
  }
  
  return whole;
} // end of ConvertToProper
