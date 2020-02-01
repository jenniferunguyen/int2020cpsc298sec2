/*Jennifer Nguyen
2320560
jenguyen@chapman.edu
CPSC 298-01 German
Assignment 3*/

#include <iostream>
#include <string>
using namespace std;

class Pet{
    public:
        Pet();
        Pet(string name, int age, string type, double weight);
        void SetName(string name);
        void SetAge(int age);
        void SetType(string type);
        void SetWeight(double weight);
        string GetName();
        int GetAge();
        string GetType();
        double GetWeight();
        void PrintInfo();
    private:
        string m_name;
        int m_age;
        string m_type;
        double m_weight;
};
