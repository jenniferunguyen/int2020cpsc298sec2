/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 2 - sales tax*/

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){
    return (cost * (1 + (taxRate/100)));
}

int main(int argc, char **argv){

    float taxPercent;
    float price;

    cout << "Tax rate: ";
    cin >> taxPercent;
    cout << "Price: ";
    cin >> price;
    cout << "Price with taxes: " << addTax(taxPercent, price) << endl;

    return 0;
}
