#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[]) {

    if (argc != 2) {
        cout << "Failed to detect Files";
	    exit(1);
	}

    // Open the .huf file for reading in binary mode
    ifstream inputFile(argv[1], ios::binary);

    // if (!inputFile) {
    //     cerr << "Error opening the input file." << endl;
    //     return 1;
    // }

    // Read and print the binary data from the .huf file
    char byte;
    while (inputFile.get(byte)) {
        // Convert the byte to its binary representation
        for (int i = 7; i >= 0; --i) {
            cout << ((byte >> i) & 1);
        }
    }

    inputFile.close();

    return 0;
}



