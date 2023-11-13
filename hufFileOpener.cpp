#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <windows.h> 

using namespace std;

int main(int argc, char* argv[]) {

    if (argc != 2) {
        cout << "Failed to detect Files";
	    exit(1);
	}

    if (GetFileAttributesA(argv[1]) == INVALID_FILE_ATTRIBUTES) {
        cout<<"\n";
        cout<<"\n";
        cout<<"                                                  Error: file not found." << endl;
        Sleep(2000);
        exit(1);
    }


    cout<<"\n";
    cout<<"                                                Opening..............."<<endl;
        cout<<"\n";
        cout<<"\n";
    Sleep(1000);
    cout<<"                                                S o m e t h i n g    S c a r y   i s   C o m i n g"<<endl;
    cout<<"\n";
    cout<<"\n";
    Sleep(1000);


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
    Sleep(10000);

    inputFile.close();

    return 0;
}



