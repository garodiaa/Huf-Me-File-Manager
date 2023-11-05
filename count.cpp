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


   ifstream inputFile(argv[1]);
    int wordCount = 0;

    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            istringstream iss(line);
            string word;
            while (iss >> word) {
                wordCount++;
            }
        }
        inputFile.close();
    } 
    else {
        cout << "                                          Error File" << endl;
        return 1;
    }

    cout << "                                          Word count: " << wordCount << endl;
    // cout<<"                                            Encoding........"<<endl;
    
    return 0;
}