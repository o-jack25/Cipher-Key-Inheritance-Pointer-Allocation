# Cipher Key, Inheritance, and Pointer Allocation

For my cipher key, I had to complete the following task. 
Declare a character array named alphabet of length 52, initialize it to the alphabet.
Declare a character array named cipherKey of size 52.
Declare strings plaintext, ciphertext and other variables you may need.
Have the program ask for the shift and accept a value from 1-51.
Call a genCipher function which is passed the two arrays, length of the arrays, and the shift
amount. 
It generates the cipherKey array by shifting the alphabet the correct number of
characters to the left.
In main, print the Alphabet and Cipherkey below it.
Prompt for a string from the console and call an encode function. 
The encode function generates the correct ciphertext from the plaintext.
Pass it the alphabet, cipherKey,plaintext, ciphertext. In main, print the ciphertext returned.
Assign plaintext to be a null string, then call a function decode passing it the necessary parameters.
It will decode the ciphertext into plaintext. Print the result.
Functions must work by scanning and manipulating the arrays. 
They are not allowed to use any mathematical manipulation of the data.
Test your program with shift of 15 and the string: “M Go Blue Beat Ohio State”.

For the inheritance part I was given a UML with three different classes that inheritated from class Pet. Then, I had to use pointers, allocation, and new to perform the following: 
All members should be initialized when an object is created.
Each class must have its own .cpp and .h files.
Create a dog named Lassie with breed of Collie color “Brown”.
Have Lassie bark.
Have Lassie bark again.
Create a dog named Ruby, with a breed of Mixed with a color of “Silver”.
Change Ruby’s breed to Labrador.
Change Ruby’s color to Chocolate.
Have Ruby bark.
Create a bird named Tweety, with .6 ft wingspan and color “Yellow”.
Create a bird named “Donald Duck”, with a 0 wingspan and color “White”.
Change the wingspan of Donald Duck to 1.5 feet.
Have Lassie bark.
Have Ruby bark.
Free Ruby.
Have Lassie bark.
Free Lassie ☹.
Have Tweety fly 225.6 ft.
Have Donald Duck fly 18.2 ft.
Have Tweety fly 30.6 ft.
Free Donald Duck.
cout << endl << “Program Over!” << endl;
Return 0 from main.
End the program without freeing Tweety.

Last, I was to demonstrate the use of a template function. It was to take 2 reference parameters and swap the values. Testing with type int, string, and char. 
