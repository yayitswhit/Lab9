//
//  main.cpp
//  Lab9
//
//  Created by Gilbert W. Sanborn Jr on 2/23/23.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream outFile;
    ifstream inFile;
    int userNumber;
    
    outFile.open("/Users/whitsanborn/Documents/Gateway/Programming with Object Oriented C++/Lab9/Lab9/input.txt");
    inFile.open("/Users/whitsanborn/Documents/Gateway/Programming with Object Oriented C++/Lab9/Lab9/input.txt");

    do
    {
        cout << "Input a number: ";
        cin >> userNumber;
				if(userNumber >= 0) {
        outFile << userNumber << endl;
        }
    }
    while(userNumber >= 0);
    
/*    double fileNumber;
    while(!inFile.eof()) {
        inFile >> fileNumber;
        cout << fileNumber << endl;
    }*/
    return 0;
}
