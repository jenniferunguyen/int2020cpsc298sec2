#include <iostream>
using namespace std;

int main(int argc, char **argv){
    
    int capacity;
    int attendance;
    bool legal;
    int openSpace;

    cin >> capacity;
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
