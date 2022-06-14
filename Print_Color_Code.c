#include "test.h"
#include <stdio.h>
#include <assert.h>

ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);

void testNumberToPairONLY(int pairNumber)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf(" %s\n", colorPairNames);

}
