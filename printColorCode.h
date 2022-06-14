#include <stdio.h>
#include "test.h"

void testNumberToPairONLY(int pairNumber)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

Void PrintColorCode()
{
  int i;
  for(i=0; i<=25; i++)
  {
    printf("major color and minor color %s",testNumberToPairONLY(i));
  }
  
}
