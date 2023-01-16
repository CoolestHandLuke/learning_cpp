#include <iostream>
#include <string>

using namespace std;

/* Assignment 1: Take a string input from the user and convert it in to a symmetrical pyramid*/

int main() {

    string pyramid;
    cout<<"Enter the string you would like turned in to a pyramid: ";
    getline(cin, pyramid);

    for (int i = 0; i < pyramid.length(); i++) {
        for (int k = 0; k < pyramid.length() - i - 1; k++) {
            cout<<" ";
        }
        for (int j = 0; j < i + 1; j++) {
            cout<<pyramid[j];
        }
        if (i > 0) {
            for (int m = i; m > 0; m--) {
                cout<<pyramid[m-1];
            }
        }
        cout<<endl;
    }


    return 0;
}
