#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){
    return (cost * (1 + (taxRate/100)));
}

int main(int argc, char **argv){
    return 0;
}
