/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 3*/

#include "pet.h"

int main(int argc, char **argv){

    Pet *p1 = new Pet();
    Pet *p2 = new Pet("Lucky", 7, "dog", 25);

    p1->PrintInfo();
    p2->PrintInfo();

    delete p1;
    delete p2;

    return 0;
}
