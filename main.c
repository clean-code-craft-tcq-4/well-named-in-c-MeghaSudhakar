#include <stdio.h>
#include <assert.h>
#include "test.h"

int main() 
{
    int i;
    
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    
 
}
