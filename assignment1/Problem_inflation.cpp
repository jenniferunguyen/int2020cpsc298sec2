/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 1 - inflation*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){

    float itemCost;
    int yearsUntilPurchase;
    float inflationPercent;
    float inflationRate;

    cout << "Cost of item: ";
    cin >> itemCost;
    cout << "Years until purchase: ";
    cin >> yearsUntilPurchase;
    cout << "Inflation rate: ";
    cin >> inflationPercent;
    inflationRate = inflationPercent/100;

    for(int i = 0; i < yearsUntilPurchase; ++i){
        itemCost *= (1 + inflationRate);
    }

    cout << "Estimated cost in " << yearsUntilPurchase << " years: $" << itemCost << endl;

    return 0;
}
