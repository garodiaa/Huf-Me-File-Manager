#include <iostream>
#include <cstdlib>
#include <windows.h>  // for the system() function
using namespace std;  

int main();

string filename , huffname , outname;
string huffedfilename , specificWord;
int option;

void encodePanel()
{
  
    system("cls");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                ***************C O M P R E S S O R***************"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                *          Press 1 To Compress                  *"<<endl;
    cout<<"                                                *          Press 2 To Go Back to Main Menu      *"<<endl;
    cout<<"                                                *                                               *"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                           Enter an Option : ";
    cin>>option;
    if(option == 1){
        cout<<"\n";
    cout<<"                                                type FILENAME.txt and Expected HUFFEDFILENAME.huf"<<endl;
        cout<<"                                            ---->";
        cin>>filename;
        cin.ignore();
        cin>>huffname;
        cout<<"\n";
    cout<<"                                                Encoding........"<<endl;
        cout<<"\n";
        cout<<"\n";

                system("g++ encode.cpp huffman.cpp -o main");
                string command = "main " + filename + " " + huffname;
                system(command.c_str());

                Sleep(2000);
                encodePanel();
    }
    else if(option == 2)
    {
        system("cls");
        main();
    }
    else{
    encodePanel();}

  
}

int decodePanel()
{
    
    
    system("cls");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                *************d e C O M P R E S S O R*************"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                *          Press 1 To deCompress                *"<<endl;
    cout<<"                                                *          Press 2 To Read .huf File            *"<<endl;
    cout<<"                                                *          Press 3 To Go Back to Main Menu      *"<<endl;
    cout<<"                                                *                                               *"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                           Enter an Option : ";
    cin>>option;
     if(option == 1){
    cout<<"\n";
        cout<<"                                            type HUFFEDFILENAME.huf and Expected OUTPUTILENAME.txt"<<endl;
        cout<<"                                            ---->";
            cin>>huffedfilename;
            cin.ignore();
            cin>>outname;
        cout<<"\n";
    cout<<"                                                Decoding........"<<endl;
        cout<<"\n";
        cout<<"\n";
            system("g++ decode.cpp huffman.cpp -o main");
            string command = "main " + huffedfilename + " " + outname;
            system(command.c_str());

            Sleep(2000);
            decodePanel();
     }
     else if(option ==2)
     {
        cout<<"\n";
        cout<<"                                            type HUFFEDFILENAME.huf"<<endl;
        cout<<"                                            ---->";
            cin>>huffedfilename;
             cout<<"\n";
    cout<<"                                                Opening..............."<<endl;
        cout<<"\n";
        cout<<"\n";
    cout<<"                                                S o m e t h i n g    S c a r y   i s   C o m i n g"<<endl;
    cout<<"\n";
    cout<<"\n";
        system("g++ hufFileOpener.cpp -o main");
        string command = "main " + huffedfilename;
        system(command.c_str());

            Sleep(10000);
           decodePanel();
     }
     else if(option == 3)
    {
        system("cls");
        main();
    }
    else{decodePanel();}
    
  

}

int countPanel()
{
    
    
    system("cls");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                ******************C O U N T E R******************"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                *          Press 1 To Count Words               *"<<endl;
    cout<<"                                                *          Press 2 To Count Specific Words      *"<<endl;
    cout<<"                                                *          Press 3 To Go Back to Main Menu      *"<<endl;
    cout<<"                                                *                                               *"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                           Enter an Option : ";
    cin>>option;
     if(option == 1){
    cout<<"\n";
    cout<<"                                                type FILENAME.txt"<<endl;
    cout<<"                                                ---->";
            cin>>filename; 
        cout<<"\n";
    cout<<"                                                Counting........"<<endl;
        cout<<"\n";
        cout<<"\n";
            system("g++ count.cpp -o main");
            string command = "main " + filename;
            system(command.c_str());

            Sleep(5000);
           countPanel();
     }
     else if(option == 2)
     {
            cout<<"\n";
    cout<<"                                                type FILENAME.txt and the WORD"<<endl;
    cout<<"                                                ---->";
            cin>>filename;
            cin.ignore();
            cin>>specificWord;
        cout<<"\n";
    cout<<"                                                Counting........"<<endl;
        cout<<"\n";
        cout<<"\n";
            system("g++ wordcount.cpp -o main");
            string command = "main " + filename + " " + specificWord;
            system(command.c_str());

            Sleep(5000);
            countPanel();
     }
     else if(option == 3)
     {
        system("cls");
        main();
     }
    else{countPanel();}
    
 
}

int deletePanel()
{
            
            
   
    
    system("cls");
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                ******************D E L E T E R******************"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                *          Press 1 To delete                    *"<<endl;
    cout<<"                                                *          Press 2 To Go Back to Main Menu      *"<<endl;
    cout<<"                                                *                                               *"<<endl;
    cout<<"                                                *************************************************"<<endl;
    cout<<"                                                           Enter an Option : ";
    cin>>option;
    cout<<"\n";
     if(option == 1){
            string delfile;
    cout<<"                                                Enter File Name with extension: ";
            cin>>delfile;
            int res = remove(delfile.c_str());
            //Sleep(2000);
            if(res == 0)
            {
                cout<<"\n";
                cout<<"                                                            Deleted Succesfully!"<<endl;
                Sleep(2000);
                deletePanel();
            }
            else
            {
                cout<<"\n";
                cout<<"                                                            Deletetion UnSuccesful!"<<endl;
                Sleep(2000);
                deletePanel();
            }
     }
    else if(option == 2)
        {
            system("cls");
            main();
        }
        else{deletePanel();}


        // return 1;

        
}

int exitPanel()
{
   
    system("cls");
   cout<<"\n\n\n\n\n\n\n";
    cout << "                                    ___     ___     __                                   ___                  __" << endl;
    cout << "                                     |     |__     |__)     |\\/|    |    |\\ |     /\\      |     |    |\\ |    / _`" << endl;
    cout << "                                     |     |___    |  \\     |  |    |    | \\|    /~~\\     |     |    | \\|    \\__>" << endl;

    Sleep(2000);
}


int main() {


    system("MODE 150, 40");
    system("Color F5");
    system("cls");


    cout<<"\n";
    cout<<"\n";
    cout << "                               _    _        __   __  __        ______ _ _        __  __     \n";
    cout << "                              | |  | |      / _| |  \\/  |      |  ____(_) |      |  \\/  |    \n";
    cout << "                              | |__| |_   _| |_  | \\  / | ___  | |__   _| | ___  | \\  / | __ _ _ __   __ _  __ _  ___ _ __\n";
    cout << "                              |  __  | | | |  _| | |\\/| |/ _ \\ |  __| | | |/ _ \\ | |\\/| |/ _` | '_ \\ / _` |/ _` |/ _ \\ '__|\n";
    cout << "                              | |  | | |_| | |   | |  | |  __/ | |    | | |  __/ | |  | | (_| | | | | (_| | (_| |  __/ |   \n";
    cout << "                              |_|  |_|\\__,_|_|   |_|  |_|\\___| |_|    |_|_|\\___| |_|  |_|\\__,_|_| |_|\\__,_|\\__, |\\___|_|   \n";
    cout << "                                                                                                          __/ |          \n";
    cout << "                                                                                                         |___/           \n";
    cout<<"                                                          Developed by d e v O v e r f l o w\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";


//   _    _        __   __  __        ______ _ _        __  __                                   
//  | |  | |      / _| |  \/  |      |  ____(_) |      |  \/  |                                  
//  | |__| |_   _| |_  | \  / | ___  | |__   _| | ___  | \  / | __ _ _ __   __ _  __ _  ___ _ __ 
//  |  __  | | | |  _| | |\/| |/ _ \ |  __| | | |/ _ \ | |\/| |/ _` | '_ \ / _` |/ _` |/ _ \ '__|
//  | |  | | |_| | |   | |  | |  __/ | |    | | |  __/ | |  | | (_| | | | | (_| | (_| |  __/ |   
//  |_|  |_|\__,_|_|   |_|  |_|\___| |_|    |_|_|\___| |_|  |_|\__,_|_| |_|\__,_|\__, |\___|_|   
//                                                                                __/ |          
//                                                                               |___/           


    int choice;



    cout<<"\n"<<endl;


    cout<<"                                                          *********************************"<<endl;
    cout<<"                                                          *  Press 1 For COMPRESSING      *"<<endl;
    cout<<"                                                          *  Press 2 For DECOMPRESSING    *"<<endl;
    cout<<"                                                          *  Press 3 For COUNTING         *"<<endl;
    cout<<"                                                          *  Press 4 For DELETING         *"<<endl;
    cout<<"                                                          *                               *"<<endl;
    cout<<"                                                          *  Press 0 To  Exit             *"<<endl;
    cout<<"                                                          *********************************"<<endl;

    cout<<"\n"<<endl;
    cout<<"                                                             Enter Your Choice : ";
    cin>>choice;
    
    
    

    if(choice == 1)
    {
        
        
        encodePanel();
    }

    else if (choice == 2)
    {
        
        decodePanel();

    }
    else if (choice == 3)
    {
       
        countPanel();
    }

    else if (choice == 4)
    {
        
        deletePanel();
    }


    else if (choice == 0) {

        // Exit the program when the user enters 0
        exitPanel();
        ExitProcess(0);
    }

    
    return 0;
}
