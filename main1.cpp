
//Include necessary libraries
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;


//Generate a cipher key based on what the shift will be 
void genCipher(char alphabet[], char cipherKey[], int length, int shift) {
	for (int i = 0; i < length; i++) {
		//Generate new index
		int newIndex = (i + shift) % length;
		//Assign the character from the alphabet to the cipher key
		cipherKey[i] = alphabet[newIndex];
	}
}

//Function that will encode the plaintext using the cipher key
void encode(char alphabet[], char cipherKey[], string plaintext, string& ciphertext) {
	for (char ch : plaintext){
		//Convert to uppercase
		int index = (toupper(ch) - 'A');
		//Find the index of the character in the cipher key
		char encodedChar = cipherKey[index];
		//Check if the character is lowercase
			if (islower(ch)) {
				encodedChar = tolower(encodedChar);
				ciphertext += encodedChar;
			}
			else {
				ciphertext += ch;
			}
	}
}

//Function to decode ciphertext
void decode(char alphabet[], char cipherKey[], string ciphertext, string& plaintext) {
	for (char ch : ciphertext) {
		if (isalpha(ch)) {
			int index = 0;
			//Find the index of the character in the cipher key
			for (int i = 0; i < 52; i++) {
				if (cipherKey[i] == toupper(ch)) {
					index = i;
					break;

				}
			}
			//Retrieve the character from the alphabet
			char decodedChar = alphabet[index];
			if (islower(ch)) {
				decodedChar = tolower(decodedChar);
				plaintext += decodedChar;

			}
			else {
				plaintext += ch;
			}
		}
	}

}


int main() {
	
	//Initalizing variables
	char alphabet[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cipherKey[53];
	string plaintext = "M Go Blue Beat Ohio State";
	string ciphertext = "";

	int shift;
	cout << "Enter shift (1-52): ";
	cin >> shift;

	//Generate the cipher key based on the shift
	genCipher(alphabet, cipherKey, 52, shift);

	cout << "Alphabet: " << alphabet << endl;
	cout << "Cipher Key: " << cipherKey << endl;

	//Encode and decode the plaintext
	encode(alphabet, cipherKey, plaintext, ciphertext);
	cout << "Ciphertext: " << ciphertext << endl;

	//Reset plaintext using the same cipher key
	plaintext = "";
	decode(alphabet, cipherKey, ciphertext, plaintext);
	cout << "Decoded Plaintext: " << plaintext << endl;

	return 0;

}
