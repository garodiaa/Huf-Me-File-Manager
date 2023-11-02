#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;  // for the system() function

int main() {

    cout<<"hllo"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                          888    888           .d888      888b     d888               8888888888 d8b 888               888b     d888"<<endl;
    cout<<"                          888    888          d88P\"       8888b   d8888               888        Y8P 888               8888b   d8888"<<endl;
    cout<<"                          888    888          888         88888b.d88888               888            888               88888b.d88888"<<endl;
    cout<<"                          8888888888 888  888 888888      888Y88888P888  .d88b.       8888888    888 888  .d88b.       888Y88888P888  8888b.  88888b.   8888b.   .d88b.   .d88b.  888d888"<<endl;
    cout<<"                          888    888 888  888 888         888 Y888P 888 d8P  Y8b      888        888 888 d8P  Y8b      888 Y888P 888     \"88b 888 \"88b     \"88b d88P\"88b d8P  Y8b 888P\""<<endl;
    cout<<"888888 888888 888888      888    888 888  888 888         888  Y8P  888 88888888      888        888 888 88888888      888  Y8P  888 .d888888 888  888 .d888888 888  888 88888888 888          888888 888888 888888"<<endl;
    cout<<"                          888    888 Y88b 888 888         888   \"   888 Y8b.          888        888 888 Y8b.          888   \"   888 888  888 888  888 888  888 Y88b 888 Y8b.     888"<<endl;
    cout<<"                          888    888  \"Y88888 888         888       888  \"Y8888       888        888 888  \"Y8888       888       888 \"Y888888 888  888 \"Y888888  \"Y88888  \"Y8888  888"<<endl;
    cout<<"                                                                                                                                                                     888"<<endl;
    cout<<"                                                                                                                                                                Y8b d88P"<<endl;
    cout<<"                                                                                                                                                                 \"Y88P\""<<endl;



//                           888    888           .d888      888b     d888               8888888888 d8b 888               888b     d888
//                           888    888          d88P"       8888b   d8888               888        Y8P 888               8888b   d8888
//                           888    888          888         88888b.d88888               888            888               88888b.d88888
//                           8888888888 888  888 888888      888Y88888P888  .d88b.       8888888    888 888  .d88b.       888Y88888P888  8888b.  88888b.   8888b.   .d88b.   .d88b.  888d888
//                           888    888 888  888 888         888 Y888P 888 d8P  Y8b      888        888 888 d8P  Y8b      888 Y888P 888     "88b 888 "88b     "88b d88P"88b d8P  Y8b 888P"
// 888888 888888 888888      888    888 888  888 888         888  Y8P  888 88888888      888        888 888 88888888      888  Y8P  888 .d888888 888  888 .d888888 888  888 88888888 888          888888 888888 888888
//                           888    888 Y88b 888 888         888   "   888 Y8b.          888        888 888 Y8b.          888   "   888 888  888 888  888 888  888 Y88b 888 Y8b.     888
//                           888    888  "Y88888 888         888       888  "Y8888       888        888 888  "Y8888       888       888 "Y888888 888  888 "Y888888  "Y88888  "Y8888  888
//                                                                                                                                                                      888
//                                                                                                                                                                 Y8b d88P
//                                                                                                                                                                  "Y88P"




    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x000F);
    int choice;
    while(choice)
    {
        string filename , huffname , outname;
        string huffedfilename;
        cout<<endl<<endl;
        cout<<"                                      1 for compressing"<<endl;
        cout<<"                                      2 for decompressing"<<endl;
        cout<<"                                      3 for Deleting"<<endl;
        cout<<endl;
        cout<<"                                      0 for Exit"<<endl;
        cin>>choice;

        if (choice == 0) {
            // Exit the program when the user enters 0
            break;
            ExitProcess(0);
        }

        else if(choice == 1)
        {
            cout<<"type filename and expected huffed file"<<endl;
            cout<<"-----> ";
            cin>>filename;
            cin.ignore();
            cin>>huffname;


            system("g++ encode.cpp huffman.cpp -o main");
            string command = "main " + filename + " " + huffname;
            system(command.c_str());
        }

        else if (choice == 2)
        {

            cout<<"type huffed filename and expected output file"<<endl;
            cout<<"-----> ";
            cin>>huffedfilename;
            cin.ignore();
            cin>>outname;

            system("g++ decode.cpp huffman.cpp -o main");
            string command = "main " + huffedfilename + " " + outname;
            system(command.c_str());


        }

        else if (choice == 3)
        {
            string delfile;
            cin>>delfile;
            //cin>>command;
            int res = remove(delfile.c_str());
            if(res == 0)
            {
                cout<<"del succ";
            }
        }
    }
    // Compile the first .cpp file (file1.cpp)
    //system("g++ -o file1.exe file1.cpp");

    // Run the first executable with an argument
    //system("./main inputFile.txt amrhuf.huf");

    // system("g++ decode.cpp huffman.cpp -o main");
    // system("main amrtomarhuf.huf hedarFile.txt");

    // Compile the second .cpp file (file2.cpp)
    //system("g++ -o file2.exe file2.cpp");
// system("main amrtomarhuf.huf hedarFile.txt");
    // Run the second executable with a different argument
    //system("./file2.exe argument2");

    return 0;
}
