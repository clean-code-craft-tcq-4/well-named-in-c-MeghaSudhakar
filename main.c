#include <stdio.h>
#include <assert.h>
#include "test.h"

void testNumberToPairONLY(int pairNumber);

int main() 
{
    int i;
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("Pair No.\tMajor Color\tMinor Color\n");
    for(i=1; i<=25; i++)
    {
        printf("%d\t\t",i);
        testNumberToPairONLY(i); 
    }  
}

void testNumberToPairONLY(int pairNumber)
 {
         ColorPair colorPair = GetColorFromPairNumber(pairNumber);
         char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
         ColorPairToString(&colorPair, colorPairNames);
         printf(" %s\n", colorPairNames);

 }
