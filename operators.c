#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) 
{
    double mealCost;
    int tipPerc;
    int taxPerc;
    scanf("%lf %d %d", &mealCost, &tipPerc, &taxPerc);
    double total = mealCost+ mealCost*(tipPerc+taxPerc)/100;
    printf("The total meal cost is %d dollars.", (int)round(total));
    return 0;
}
