#include <iostream>
using namespace std;

int main(int argc, char **argv){
    
    float weightOunces;
    const float OUNCES_IN_TON = 35273.92;
    cin >> weightOunces;
    float weightTons = weightOunces/OUNCES_IN_TON;
    cout << weightTons << " weight in metric tons" << endl;
    cout << "You need " << OUNCES_IN_TON/weightTons << " boxes to get one metric ton of cereal" << endl;
    return 0;
}
