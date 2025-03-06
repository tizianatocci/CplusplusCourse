/*
Substitution Cipher
Write a program that asks a user to enter a secret message.
Encrypt this message using the substitution cipher and display the encripted message.
Then decrypt the encrypted message back to the original message.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message{};
    string crypted_message{};
    string decrypted_message{};
    cout << "Enter your secret message: ";
    getline(cin, message);
    
    for (char letter:message) {
        int idx{};
        // check if letter is contained in alfabet
        idx = alphabet.find(letter); 
        if (idx != -1){ // idx != string::npos
            crypted_message = crypted_message + key.at(idx);
        } else {
            crypted_message = crypted_message + letter;
        }
    }
    cout << endl;
    cout << "Encrypting message..." << endl;
    cout << endl;
    cout << crypted_message << endl;
    cout << endl;
    for (char letter:crypted_message) {
        int idx{};
        // check if letter is contained in alfabet
        idx = key.find(letter);
        if (idx != -1){
            decrypted_message = decrypted_message + alphabet.at(idx);
        } else {
            decrypted_message = decrypted_message + letter;
        }
    }
    cout << "Decrypting message..." << endl;
    cout << endl;
    cout << decrypted_message << endl;
    cout << endl;
    
    return 0;
}