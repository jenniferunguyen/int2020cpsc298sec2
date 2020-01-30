#include <iostream>
#include <string>
using namespace std;

class Pet{
    public:
        Pet::Pet();
        Pet::Pet(string name = "NoName", int age = "0", string type = "pet", double weight = "0");
        void SetName(string name);
        void SetAge(int age);
        void SetType(string type);
        void SetWeight(double weight);
        string GetName();
        int GetAge();
        string GetType();
        douoble GetWeight();
        void PrintInfo();
    private:
        string m_name;
        int m_age;
        string m_type; //dog, cat
        double m_weight;
};




accessors
mutators
