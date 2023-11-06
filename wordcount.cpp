#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Failed to detect Files";
		exit(1);
	}


    
    ifstream inputFile(argv[1]);
    string wordToCount = argv[2];
    string word;
    int wordCount = 0;
    transform(wordToCount.begin(), wordToCount.end(), wordToCount.begin(), ::tolower);
    while (inputFile >> word) {
        // Convert the word to lowercase for case-insensitive counting
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        if (word == wordToCount) {
            wordCount++;
        }
    }
    inputFile.close();

    cout << "                                                 The word \"" << wordToCount << "\" appears " << wordCount << " times in the file." << endl;

    // cout << "                                          Word count: " << wordCount << endl;
    // cout<<"                                            Encoding........"<<endl;
    
    return 0;
}