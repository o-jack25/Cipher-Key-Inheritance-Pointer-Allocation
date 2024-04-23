
#include <iostream>
#include <string>

using namespace std;

//Base class representing a pet
class Pet {
protected:
	string name;
	string color;

public:
	//Default constructor
	Pet() {
		name = "NAN";
		color = "NAN";
		cout << "I'm "<< name << " and my color is " << color << " and I'm happy to be your pet!" << endl;
	}

	//Constructor with parameters
	Pet(string newName, string newColor) {
		name = newName;
		color = newColor;
		cout << "I'm "<< name << ", and my color is " << color << " and I'm happy to be your pet!" << endl;
	}

	//Destructor
	~Pet()
	{
		cout << name << " is leaving now, sorry you didn't like my color of: " << color << " :(" << endl;
	}

	//Accessor methods
	void setName(string newName) {
		name = newName;
	}

	void setColor(string newColor) {
		color = newColor;
	}

	string getName() {
		return name;
	}

	string getColor() {
		return color;
	}
};

//Derived class representing a dog, inherits from Pet
class Dog : public Pet {
private:
	string breed;
	int barkCount;

public:
	//default constructor
	Dog() : Pet() {
		breed = "NAN";
		barkCount = 0;
	}
	//Constructor with parameters
	Dog(string newName, string newColor, string newBreed) : Pet(newName, newColor) {
		breed = newBreed;
		barkCount = 0;
	}
	//Accessor methods
	void setBreed(string newBreed) {
		breed = newBreed;
	}

	string getBreed() {
		return breed;
	}

	void bark() {
		barkCount++;
		cout << name << ", the " << color << " " << breed << " says: Bow Wow! Bow Wow!" << endl;
	}
	//Destructor
	~Dog() {
	cout << "Oribabky barking " << barkCount << " times irritated you." << endl;
	}

};

//Derived class representing a bird, inherits from Pet
class Bird : public Pet {
private:
	int wingspan;
	int totalFtFlown;

public:
	//Default constructor
	Bird() : Pet() {
		wingspan = 0;
		totalFtFlown = 0;
	}
	//Constructor with parameters
	Bird(string newName, string newColor, int newWingspan) : Pet(newName, newColor) {
		wingspan = newWingspan;
		totalFtFlown = 0;
	}
	//Accessor methods
	void setWingspan(int newWingspan) {
		wingspan = newWingspan;
	}

	int getWingspan() const {
		return wingspan;
	}

	void fly(int numFeet) {
		totalFtFlown += numFeet;
		cout << "Yahoo! " << name << " is flying " << numFeet << " feet with my wingspan of " << wingspan << " feet!" << endl;
	}
	//Destructor
	~Bird() {
		cout << "I guess flying " << totalFtFlown << " feet was too much!" << endl;
	}

};


int main() {

	//Create instances of the Pet object
	Pet myPet("Tom", "Black");
	cout << endl;
	//Create a dog and call the bark method
	Dog myDog("Buddy", "Brown", "Labrador");
	myDog.bark();
	cout << endl;
	//Create a bird and call the fly method
	Bird myBird("Tweety", "Yellow", 10);
	myBird.fly(50);
	cout << endl;

	return 0;
}