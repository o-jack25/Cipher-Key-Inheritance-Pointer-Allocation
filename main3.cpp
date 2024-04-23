
#include "Dog.h"
#include "Bird.h"

using namespace std;

int main() {
    // Create Dog Lassie
    Dog* lassie = new Dog("Lassie", "Collie", "Brown");
    lassie->bark();
    lassie->bark();

    // Create Dog Ruby
    Dog* ruby = new Dog("Ruby", "Mixed", "Silver");
    ruby->setBreed("Labrador"); //Set breed
    ruby->setColor("Chocolate");
    ruby->bark();

    // Create Bird Tweety
    Bird* tweety = new Bird("Tweety", 0.6, "Yellow");

    // Create Bird Donald Duck
    Bird* donaldDuck = new Bird("Donald Duck", 0, "White");
    donaldDuck->setWingspan(1.5);

    lassie->bark();
    ruby->bark();

    delete ruby;//Free memory
    lassie->bark();

    delete lassie;//Free memory
    tweety->fly(225.6);
    donaldDuck->fly(18.2);
    tweety->fly(30.6);

    delete donaldDuck;



    return 0;
}