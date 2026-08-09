#include <stdio.h>
#include <math.h>

int main()
 {
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound intrest calculator: \n");

    printf("Enter Principal amount: ");
    scanf("%lf", &principal);


        printf("Enter rate of intrest % : ");
        scanf("%lf", &rate);
        rate = rate / 100;

        printf("Number of times compounded: ");
        scanf("%d", &timesCompounded);
        

        printf("Number of years: ");
        scanf("%d", &years);

        total = principal * pow(1 + rate / timesCompounded, timesCompounded * years);

        printf("The total money earned would be $%.2lf", total);

        






    return 0;
}