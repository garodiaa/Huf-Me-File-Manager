#include <iostream>
#include <cstdlib>
#include <windows.h>  // for the system() function
using namespace std;  

int main();

string filename , huffname , outname;
string huffedfilename;
int option;

void encodePanel()
{
  
    jump3:
    system("cls");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                            *********************COMPRESSOR******************"<<endl;
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                            *          Press 1 To Compress                  *"<<endl;
    cout<<"                                            *          Press 2 To Go Back to Main Menu      *"<<endl;
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                                       Enter an Option : ";
    cin>>option;
    if(option == 1){
    cout<<"                                            type FILENAME.txt and Expected HUFFEDFILENAME.huf"<<endl;
        cout<<"                                        ---->";
        cin>>filename;
        cin.ignore();
        cin>>huffname;
        cout<<"\n";
    cout<<"                                            Encoding........"<<endl;
        cout<<"\n";
        cout<<"\n";

                system("g++ encode.cpp huffman.cpp -o main");
                string command = "main " + filename + " " + huffname;
                system(command.c_str());

                Sleep(2000);
                goto jump3;
    }
    else if(option == 2)
    {
        system("cls");
        main();
    }
    else{goto jump3;}

    //return 1;
}

int decodePanel()
{
    
    jump4:
    system("cls");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                            ********************DECOMPRESSOR*****************"<<endl;
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                            *          Press 1 To deCompress                  *"<<endl;
    cout<<"                                            *          Press 2 To Go Back to Main Menu      *"<<endl;
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                                       Enter an Option : ";
    cin>>option;
     if(option == 1){
    cout<<"\n";
        cout<<"                                        type HUFFEDFILENAME.huf and Expected OUTPUTILENAME.txt"<<endl;
        cout<<"                                        ---->";
            cin>>huffedfilename;
            cin.ignore();
            cin>>outname;
        cout<<"\n";
    cout<<"                                            Decoding........"<<endl;
        cout<<"\n";
        cout<<"\n";
            system("g++ decode.cpp huffman.cpp -o main");
            string command = "main " + huffedfilename + " " + outname;
            system(command.c_str());

            Sleep(2000);
            goto jump4;
     }
     else if(option == 2)
    {
        system("cls");
        main();
    }
    else{goto jump4;}
    
    // return 1;

}

int deletePanel()
{
            
            
   
    jump5:
    system("cls");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                            ************************DELETER*****************"<<endl;
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                            *          Press 1 To delete                    *"<<endl;
    cout<<"                                            *          Press 2 To Go Back to Main Menu      *"<<endl;
    cout<<"                                            *************************************************"<<endl;
    cout<<"                                                       Enter an Option : ";
    cin>>option;
     if(option == 1){
            string delfile;
    cout<<"                                            Enter File Name with extension: ";
            cin>>delfile;
            int res = remove(delfile.c_str());
            //Sleep(2000);
            if(res == 0)
            {
                cout<<"                                                       Deleted Succesfully"<<endl;
                Sleep(2000);
                goto jump5;
            }
            else
            {
                cout<<"                                                      Deleted UnSuccesfully"<<endl;
                Sleep(2000);
                goto jump5;
            }
     }
    else if(option == 2)
        {
            system("cls");
            main();
        }
        else{goto jump5;}


        // return 1;

        
}


int main() {

    // cout<<"hllo"<<endl;
    // cout<<endl;
    // cout<<endl;
    // cout<<"                          888    888           .d888      888b     d888               8888888888 d8b 888               888b     d888"<<endl;
    // cout<<"                          888    888          d88P\"       8888b   d8888               888        Y8P 888               8888b   d8888"<<endl;
    // cout<<"                          888    888          888         88888b.d88888               888            888               88888b.d88888"<<endl;
    // cout<<"                          8888888888 888  888 888888      888Y88888P888  .d88b.       8888888    888 888  .d88b.       888Y88888P888  8888b.  88888b.   8888b.   .d88b.   .d88b.  888d888"<<endl;
    // cout<<"                          888    888 888  888 888         888 Y888P 888 d8P  Y8b      888        888 888 d8P  Y8b      888 Y888P 888     \"88b 888 \"88b     \"88b d88P\"88b d8P  Y8b 888P\""<<endl;
    // cout<<"888888 888888 888888      888    888 888  888 888         888  Y8P  888 88888888      888        888 888 88888888      888  Y8P  888 .d888888 888  888 .d888888 888  888 88888888 888          888888 888888 888888"<<endl;
    // cout<<"                          888    888 Y88b 888 888         888   \"   888 Y8b.          888        888 888 Y8b.          888   \"   888 888  888 888  888 888  888 Y88b 888 Y8b.     888"<<endl;
    // cout<<"                          888    888  \"Y88888 888         888       888  \"Y8888       888        888 888  \"Y8888       888       888 \"Y888888 888  888 \"Y888888  \"Y88888  \"Y8888  888"<<endl;
    // cout<<"                                                                                                                                                                     888"<<endl;
    // cout<<"                                                                                                                                                                Y8b d88P"<<endl;
    // cout<<"                                                                                                                                                                 \"Y88P\""<<endl;


    int choice;


    system("MODE 150, 40");
    system("Color 7C");


    jump1:
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";


    system("cls");
    cout<<"\n"<<endl;



    cout<<"                                                       *  Press 1 For COMPRESSING      *"<<endl;
    cout<<"                                                       *  Press 2 For DECOMPRESSING    *"<<endl;
    cout<<"                                                       *  Press 3 For DELETING         *"<<endl;
    cout<<"                                                       *  Press 0 To  Exit             *"<<endl;
    cout<<"\n"<<endl;
    cout<<"                                                          Enter Your Choice : ";
    cin>>choice;
    
    
    

    if(choice == 1)
    {
        
        //system("cls");
        encodePanel();
    }

    else if (choice == 2)
    {
        //system("cls");
        decodePanel();

    }

    else if (choice == 3)
    {
        //system("cls");
        deletePanel();
    }


    else if (choice == 0) {

        // Exit the program when the user enters 0
        ExitProcess(0);
    }

    
    return 0;
}
