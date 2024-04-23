

#include "Dog.h"
#include <iostream>
#include "main2.cpp"
#include "Bird.h"

using namespace std;

Dog::Dog(string newName, string newBreed, string newColor) {
    name = newName; //Set name
    breed = newBreed; //Set breed
    color = newColor; // Set color
}

//Display message when memory is freed
Dog::~Dog() {
    cout << name << " has been freed." << endl;
}
//Accessor methods
void Dog::setName(string newName) {
    name = newName;
}

string Dog::getName() {
    return name;
}

void Dog::setBreed(string newBreed) {
    breed = newBreed;
}

string Dog::getBreed() {
    return breed;
}

void Dog::setColor(string newColor) {
    color = newColor;
}

string Dog::getColor() {
    return color;
}

void Dog::bark() {
    cout << name << ", the " << color << " " << breed << " says: Woof! Woof!" << endl;
}