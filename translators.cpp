#include "methods.h"

#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


string binary(string binaryNum) {
    int intEquiv = 0; 
    int n = 0; 
    string s = ""; 
    
    for (int i = binaryNum.size() - 1; i >= 0; i--) {
        s = binaryNum[i]; 
        if (s == "1") {
            intEquiv += pow(2, n); 
        }
        ++n;
    }

    return to_string(intEquiv);
}


string hexToBin(string s) {
    if (s == "0") {
        return "0000";
    } else if (s == "1") {
        return "0001";
    } else if (s == "2") {
        return "0010";
    } else if (s == "3") {
        return "0011";
    } else if (s == "4") {
        return "0100";
    } else if (s == "5") {
        return "0101";
    } else if (s == "6") {
        return "0110";
    } else if (s == "7") {
        return "0111";
    } else if (s == "8") {
        return "1000";
    } else if (s == "9") {
        return "1001";
    } else if (s == "A") {
        return "1010";
    } else if (s == "B") {
        return "1011";
    } else if (s == "C") {
        return "1100";
    } else if (s == "D") {
        return "1101";
    } else if (s == "E") {
        return "1110";
    } 
    return "1111"; // if s == F    
}


string hexadecimal(string hexa) {
    string hexaBin = "";
    string s; 
    string h; 

    for (int i = 0; i <= hexa.size() - 1; i++) {
        s = hexa[i]; // converting char to string 
        hexaBin += hexToBin(s);
    }

    h = binary(hexaBin);
    return h;
}


int main() {
    string binaryNum; 
    string hexaNum; 

    cout << "What binary number would you like to translate into decimal format?" << endl;
    cin >> binaryNum; 
    cout << binaryNum << " in decimal format is: " << binary(binaryNum) << " " << endl;

    cout << "----------------------------------------------------------------------------" << endl;

    cout << "What hexadecimal number would you like to translate into decimal format?" << endl;
    cin >> hexaNum;
    cout << hexaNum << " in decimal format is: " << hexadecimal(hexaNum) << " " << endl;
    return 0;
}