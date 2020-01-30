/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 1 - fire capacity*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){

    int capacity;
    int attendance;
    bool legal;
    int openSpace;

    cout << "Room capacity: ";
    cin >> capacity;
    cout << "Number of people for meeting: ";
    cin >> attendance;

    cout << "Based on fire regulations, ";
    if(capacity >= attendance){
        cout << "it is legal to hold this meeting. You can fit " << capacity-attendance << " more people." << endl;
    }
    else{
        cout << "it is not legal to hold this meeting. You exceed the room capacity limit by "
             << attendance - capacity << "." << endl;
    }

    return 0;
}
