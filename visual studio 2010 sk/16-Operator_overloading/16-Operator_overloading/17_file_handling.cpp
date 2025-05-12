#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "sample.txt";

    // Step 1: Open file in write mode
    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    // Step 2: Write data to file
    outFile << "Hello, this is a test message.\n";
    outFile << "C++ file handling is simple.\n";

    // Step 3: Close the file after writing
    outFile.close();

    // Step 4: Open file in read mode
    ifstream inFile(filename);
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    // Step 5 & 6: Read and print data from file
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Step 7: Close the file after reading
    inFile.close();

    return 0;
}
