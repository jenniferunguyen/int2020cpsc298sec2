#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int numberArray[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    for(int i = 0; i < 10; ++i){
        int userInput;
        cin >> userInput;
        if(userInput < 0){
            break;
        }
        else{
            numberArray[i] = userInput;
        }
    }
    for(int i = 0; i < 10; ++i){
        if(numberArray[i] < 0){
            break;
        }
        cout << numberArray[i] << endl;
    }
    return 0;
}
