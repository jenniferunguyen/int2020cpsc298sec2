#include <iostream>
using namespace std;

int main(int argc, char **argv){

    float itemCost;
    int yearsUntilPurchase;
    float inflationPercent;
    float inflationRate;

    cin >> itemCost;
    cin >> yearsUntilPurchase;
    cin >> inflationPercent;
    inflationRate = inflationPercent/100;

    for(int i = 0; i < yearsUntilPurchase; ++i){
        itemCost *= (1 + inflationRate);
    }

    cout << "Estimated cost in " << yearsUntilPurchase << " years: $" << itemCost << endl;

    return 0;
}
