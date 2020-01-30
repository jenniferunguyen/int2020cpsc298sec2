#include "pet.h"

Pet::Pet(){}

Pet::Pet(string name = "NoName", int age = "0", string type = "dog", double weight = "0")
    m_name = name;
    m_age = age;
    m_type = type;
    m_weight = weight;
}

void Pet::SetName(string name){
    m_name = name;
}

void Pet::SetAge(int age){
    m_age = age;
}

void Pet::SetType(string type){
    if(type != "dog" && type != "cat"){
        m_type = "pet";
    }
    else{
        m_type = type;
    }
}

void Pet::SetWeight(double weight){
    m_weight = weight;
}

string Pet::GetName(){
    return m_name;
}

int Pet::GetAge(){
    return m_age;
}

string Pet::GetType(){
    return m_type;
}

double Pet::GetWeight(){
    return m_weight;
}

void Pet::PrintInfo(){
    cout << m_name << endl;
    cout << m_age << " years old"<< endl;
    cout << m_type << endl;
    cout << m_weight << " pounds" << endl;
}
