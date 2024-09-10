// 22.Calculate compound interest (Compound Interest formula:
// a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t
// b. Compound Interest = Amount – P

#include <stdio.h>
int main() 
{
    double p,r, amount, compoundInterest;
    int years;


    printf("Enter the principal amount: ");
    scanf("%lf", &p);


    printf("Enter the annual interest rate in percentage : ");
    scanf("%lf", &r);


    printf("Enter the number of years: ");
    scanf("%d", &years);

    
    amount = p* ((1 + r / 100), years);

    
    compoundInterest = amount - p;

    
    printf("The amount after %d years is: %.2lf\n", years, amount);
    printf("The compound interest is: %.2lf\n", compoundInterest);

}

