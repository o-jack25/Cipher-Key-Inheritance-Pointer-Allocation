#include <iostream>
#include <string>

using namespace std;

// Template function to swap two values of any type
template<typename T>
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Swap integers
    int num1 = 5, num2 = 10;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    Swap(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swap strings
    string str1 = "Hello", str2 = "World";
    cout << "\nBefore swapping: str1 = " << str1 << ", str2 = " << str2 << endl;
    Swap(str1, str2);
    cout << "After swapping: str1 = " << str1 << ", str2 = " << str2 << endl;

    // Swap characters
    char char1 = 'a', char2 = 'b';
    cout << "\nBefore swapping: char1 = " << char1 << ", char2 = " << char2 << endl;
    Swap(char1, char2);
    cout << "After swapping: char1 = " << char1 << ", char2 = " << char2 << endl;

    return 0;
}