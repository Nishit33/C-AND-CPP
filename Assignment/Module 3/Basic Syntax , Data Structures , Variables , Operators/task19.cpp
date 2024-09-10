//19.Calculate compound interest


#include <stdio.h>
int main() 
{
	
    double principal, rate, compoundInterest;
    int timesCompounded, years;


    printf("Enter the principal amount: ");
    scanf("%lf", &principal);


    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);


    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &timesCompounded);


    printf("Enter the number of years: ");
    scanf("%d", &years);


    compoundInterest = principal *((1 + (rate / (timesCompounded * 100))), timesCompounded * years);

    
    printf("The compound interest is: %.2lf\n", compoundInterest);

}

