/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 2 - 2d array*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    
    int a[4][5];

    int column = 0;
    int row = 0;

    while(column < 5){
        cin >> a[row][column];
        ++column;
        if(column == 5 && row < 3){
            ++row;
            column = 0;
        }
    }

    return 0;
}
