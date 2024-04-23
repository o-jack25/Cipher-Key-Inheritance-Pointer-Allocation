
#pragma once
#ifndef DOG_H
#define DOG_H

#include <string>

using namespace std;

class Dog {
private:
    string name;
    string breed;
    string color;

public:
    //Constructor and destructor
    Dog(string newName,string newBreed,string newColor);
    ~Dog();

    //Accesor methods
    void setName(string newName);
    string getName();

    void setBreed(string newBreed);
    string getBreed();

    void setColor(string newColor);
    string getColor();

    void bark();
};

#endif // DOG_H