#include <stdio.h>
#include <assert.h>
#include "test.h"
#include "printColorCode.h"


int main() 
{
    int i;
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    
  for(i=0; i<=25; i++)
  {
    testNumberToPairONLY(i);
  }
    return 0;
}
