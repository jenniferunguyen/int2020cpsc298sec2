/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 1 - cereal*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){

    float weightOunces;
    const float OUNCES_IN_TON = 35273.92;

    cout << "Weight of cereal box in ounces?" << endl;
    cin >> weightOunces;

    float weightTons = weightOunces/OUNCES_IN_TON;
    cout << "Weight in metric tons: " << weightTons <<  endl;
    cout << "You need " << OUNCES_IN_TON/weightTons << " boxes to get one metric ton of cereal" << endl;

    return 0;
}
