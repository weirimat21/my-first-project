#include <stdio.h>
#include <cs50.h>
#include <cs50.h>
#include <math.h>
int main(void) {

        int days, start;
        double total;
        do {
        days = get_int("Enter number of days in a month: ");
        }
        while (days < 28 || days > 31);
        do {
            start = get_int("How many pennies do you start with: ");
        }
        while (start < 1);

        for (int x=0;x<days; x++ ) {
            total = total + start*pow(2,x);
        }
    printf("$%.2f\n", total/100 );

}
