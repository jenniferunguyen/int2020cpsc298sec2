/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 2 - zero both*/

#include <iostream>
using namespace std;

void zeroBoth(int &value1, int &value2){
    value1 = 0;
    value2 = 0;
}

int main(int argc, char **argv){

    int a;
    int b;

    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;

    cout << "First number is " << a << " and second number is " << b << endl;
    zeroBoth(a,b);
    cout << "Ran zeroBoth" << endl;
    cout << "First number is " << a << " and second number is " << b << endl;

    return 0;
}
