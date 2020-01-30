//create two instances of pet and print their details to console output
#include "pet.h"

int main(int argc, char **argv){
    Pet p1 = new Pet();
    Pet p2 = new Pet("Lucky", 7, "dog", 25);
    
    p1->PrintInfo();
    p2->PrintInfo();

    delete p1;
    delete p2;

    return 0;
}
