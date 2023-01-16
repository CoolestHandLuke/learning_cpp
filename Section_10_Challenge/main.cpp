#include <iostream>
#include <string>

using namespace std;

/* Simple cryptography program, prompts user for a secret message that will then be encoded
using a simple replacement cypher and then read back to the user*/

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message;
    string encoded_message;
    cout<<"Enter your secret message: ";
    getline(cin, secret_message);

    for (char letr: secret_message) {
        for (int i = 0; i < alphabet.length(); i++) {
            if (letr == alphabet[i]) {
                encoded_message += key[i];
                break;
            } else if(i == alphabet.length() - 1) {
                encoded_message += letr;
            }
        }
    }
    cout<<"Your encoded message:"<<endl;
    cout<<encoded_message<<endl;
}
