#include <stdio.h>
#include <math.h>
#include "ArmstrongNums.h"


int main(void)
{
    int start,end;
    printf("Input start of the range: ");
    scanf("%d",&start);
    printf("Input end of the range: ");
    scanf("%d",&end);
    Print_Armstrong_Nums(start, end);
    return 0;
}

