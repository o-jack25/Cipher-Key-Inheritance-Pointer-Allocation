

#include "Bird.h"
#include <iostream>

using namespace std;

Bird::Bird(string newName, double newWingspan, string newColor) {
    name = newName; //Set Name
    wingspan = newWingspan; //Set Wingspan
    color = newColor; // Set Color
}

//Display message when you free the object
Bird::~Bird() {
    cout << name << " has been freed." << endl;
}
//Accessor methods
void Bird::setName(string newName) {
    name = newName;
}

string Bird::getName() {
    return name;
}

void Bird::setWingspan(double newWingspan) {
    wingspan = newWingspan;
}

double Bird::getWingspan() {
    return wingspan;
}

void Bird::setColor(string newColor) {
    color = newColor;
}

string Bird::getColor() {
    return color;
}

void Bird::fly(double distance) {
    cout << name << " is flying " << distance << " feet!" << endl;
}