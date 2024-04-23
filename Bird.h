
#pragma once
#ifndef BIRD_H
#define BIRD_H

#include <string>

using namespace std;

class Bird {
private:
    string name;
    double wingspan;
    string color;

public:
    //Contructor and destructor
    Bird(string newName, double newWingspan, string newColor);
    ~Bird();


    //Accessor methods
    void setName(string newName);
    string getName();

    void setWingspan(double newWingspan);
    double getWingspan();

    void setColor(string newColor);
    string getColor();

    void fly(double distance);
};

#endif // BIRD_H