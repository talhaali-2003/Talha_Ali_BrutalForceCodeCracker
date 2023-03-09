// Talha_Ali_BrutalForceCodeCracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void decodeText(string s) {
    for (int key = 0; key < 26; key++) {
        cout << "Decode for key - " << char('a' + key) << endl;
        string ds = s;
        for (int i = 0; i < ds.length(); i++) {
            if (ds[i] >= 'a' && ds[i] <= 'z')
                ds[i] = 'a' + (ds[i] - 'a' + key) % 26;
            if (ds[i] >= 'A' && ds[i] <= 'Z')
                ds[i] = 'A' + (ds[i] - 'A' + key) % 26;
        }
        cout << ds << endl << endl;
    }
}
int main()
{   
    string inputString;
    cout << "Example Decrypt: Whvwlqj wkh Vbvwhp";
    for (int i = 0; i <= 1; i++) {
        string s = "Whvwlqj wkh Vbvwhp";
        cout << endl;
        decodeText(s);
    }
    cout << "Enter a shift cipher string to decrypt: ";
    cin >> inputString;
    for (int i = 0; i <= 1; i++) {
        string s = inputString;
        cout << endl;
        decodeText(s);
    }
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
