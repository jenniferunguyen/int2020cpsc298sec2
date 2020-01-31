/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 2 - conversion*/

#include <iostream>
#include <string>
using namespace std;

void PrintMeters(int meters, int centimeters){
    cout << meters << " m and " << centimeters << " cm" << endl;
}

//0.3048 m = 1 ft, 100 cm = 1 m, 12 in = 1 ft
void ConvertToMeters(int feet, int inches, int &meters, int &centimeters){
    int totalInches = (12 * feet) + inches;
    centimeters = totalInches * 2.54;
    meters = centimeters / 100;
    centimeters = centimeters - (meters * 100);
}

void AskForLength(){
    while(true){
        cout << "Enter length in feet and inches, separated by space: ";
        string userInput;
        getline(cin, userInput);
        if(userInput != "exit"){
            int spaceAt = userInput.find(' ');
            string firstNum = userInput.substr(0, spaceAt);
            string secondNum = userInput.substr(spaceAt + 1, userInput.size() - spaceAt);
            int feet = stoi(firstNum);
            int inches = stoi(secondNum);
            int meters;
            int centimeters;
            ConvertToMeters(feet, inches, meters, centimeters);
            PrintMeters(meters, centimeters);
        }
        else{
            break;
        }
    }
}

int main(int argc, char **argv){

    AskForLength();
    return 0;
}
