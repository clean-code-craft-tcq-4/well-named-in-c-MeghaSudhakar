#include "test.h"
#include <stdio.h>
#include <assert.h>

void testNumberToPairONLY(int pairNumber)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf(" %s\n", colorPairNames);

}
