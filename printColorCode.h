#include <stdio.h>
#include "test.h"
#include <assert.h>

void testNumberToPairONLY(int pairNumber)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
}


