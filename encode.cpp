#include <iostream>
#include <windows.h> 
#include "huffman.hpp"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout<<"                                                Failed to detect Files";
		exit(1);
	}

    if (GetFileAttributesA(argv[1]) == INVALID_FILE_ATTRIBUTES) {
        cout<<"\n";
        cout<<"\n";
        cout<<"                                                Error: Input file not found." << endl;
        exit(1);
    }

    
    
    huffman f(argv[1], argv[2]);
    f.compress();
    cout<<"                                                Encoding........"<<endl;
    Sleep(1000);
    cout<<"\n";
    cout<<"\n";
    cout <<"                                                             Compressed successfully" << endl;
    
    return 0;
}